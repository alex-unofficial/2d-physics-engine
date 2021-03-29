#include <iostream>
#include <algorithm>

#include "body.h"

Body::Body(int FPS, float mass, Vector2 r, Vector2 v) {
    this->dt = 1.0/FPS;

    this->mass = mass;

    this->r = r;
    this->v = v;
    this->a = {0,0};
}

Body::~Body() {
    //empty for now
}

void Body::addForce(Force f) {
    this->F.push_back(f);
}

Force Body::sumF() {
    Force Ft = Force({0,0});
    std::for_each(F.begin(), F.end(), [&](Vector2 f){Ft += f;});
    return Ft;
}

void Body::Update() {
    for(auto f: this->F)
        f.Update();

    Force Ft = this->sumF();

    a = Ft / mass;

    v += a*dt;
    r += v*dt;
}
