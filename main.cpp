#include <iostream>
#include <cmath>

#include "object.h"
#include "body.h"
#include "vector2.h"
#include "force.h"

using namespace std;

int main() {
    // Body(fps, mass, position vector, velocity vector)
    Body b = Body(60, 10, {10,0}, {0,5}); 

    b.addForce(Force([&](){return -b.getPos();}));

    for(int i = 0 ; i < 60 ; i++) {
        b.Update();
        cout << b.getPos() << "\t\t" << b.getAcc() << endl;
    }
}
