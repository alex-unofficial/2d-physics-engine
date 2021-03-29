#include <iostream>

#include "object.h"
#include "body.h"
#include "vector2.h"
#include "force.h"

using namespace std;

int main() {
    Body b = Body(60, 10, {10,0}, {0,5}); 

    b.addForce(Force([&](){return -(10 * (b.getVel().norm()) * (b.getVel().norm()) / b.getPos().norm())*(b.getPos().unit());}));

    for(int i = 0 ; i < 240 ; i++) {
        b.Update();
        cout << b.getPos() << "   \t"  << b.getVel().norm() << " " << b.getPos().norm() << endl ;
    }
}
