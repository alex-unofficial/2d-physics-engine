#include <iostream>

#include "object.h"
#include "body.h"
#include "vector2.h"
#include "force.h"

using namespace std;

int main() {
    Body b = Body(60, 10, {0,0}, {2,2}, {0,0});

    Force f = Force({1, 1});
    Force g = Force([&b](){return -3 * b.getVel();});

    cout << f << g << endl;

    b.Update();
    g.Update();

    cout << f << g << endl;

    b.Update();
    g.Update();

    cout << f << g << endl;
}
