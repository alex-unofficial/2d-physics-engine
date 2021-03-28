#ifndef BODY
#define BODY

#include "object.h"
#include "vector2.h"

class Body : public Object {
    protected:
        float mass;

        Vector2 r;  // position
        Vector2 v;  // velocity
        Vector2 a;  // acceleration

    public:
        Body(float mass, Vector2 r, Vector2 v, Vector2 a);
        ~Body();

        void Update(float dt);
};

#endif
