#ifndef FORCE
#define FORCE

#include <functional>

#include "body.h"

class Force : public Object, public Vector2 {
    private:
        std::function<Vector2()> func;

    public:
        Force(Vector2 v);
        Force(std::function<Vector2()> func);

        void Update();
};

#endif
