#include "body.h"

Body::Body(float mass, Vector2 r, Vector2 v, Vector2 a) {
    this->mass = mass;
    this->r = r;
    this->v = v;
    this->a = a;
}

Body::~Body() {
    //empty for now
}

void Body::Update(float dt) {
    r = r + v*dt;
    v = v + a*dt;
}
