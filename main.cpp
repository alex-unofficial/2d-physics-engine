#include <iostream>

#include "object.h"
#include "vector2.h"

using namespace std;

int main() {
    Vector2 x = {5,3};
    Vector2 y = {3, 6};
    Vector2 z = x - y;
    Vector2 w = x * 2;

    Object o = Object(10, {0,0}, {0,0}, {0,0});

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << w << endl;
    
    cout << x * y << endl;
    
    cout << x.norm() << endl;
    cout << w.norm() << endl;

    cout << x % y << endl;
}
