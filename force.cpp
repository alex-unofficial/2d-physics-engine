#include "force.h"

Force::Force(Vector2 v) : Vector2(v) {
    this->func = [v]() -> Vector2 {return v;};
}

Force::Force(std::function<Vector2()> func) : Vector2(func()) {
    this->func = func;
}

void Force::Update() {
    Vector2 t = func();

    this->x = t.getX();
    this->y = t.getY();
}
