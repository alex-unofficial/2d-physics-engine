#include "body.h"

Body::Body(int FPS, float mass, Vector2 r, Vector2 v, Vector2 a) {
    this->dt = 1.0/FPS;

    this->mass = mass;

    this->r = r;
    this->v = v;
    this->a = a;
}

Body::~Body() {
    //empty for now
}

void Body::Update() {
    r += v*dt;
    v += a*dt;
}
