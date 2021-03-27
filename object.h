#ifndef OBJECT
#define OBJECT

#include "vector2.h"

class Object {
    private:
        // position
        Vector2 r;

        // velocity
        Vector2 v;

        // acceleration
        Vector2 a;

        float mass;

    public:
        Object(float m, Vector2 r, Vector2 v, Vector2 a);

        virtual ~Object();
};

#endif
