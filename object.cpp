#include "object.h"

Object::Object(float m, Vector2 r, Vector2 v, Vector2 a) {
    this->mass = m;
    this->r = r;
    this->v = v;
    this->a = a;
}

Object::~Object() {
    // empty for now
}
