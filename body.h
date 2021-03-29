#ifndef BODY
#define BODY

#include <vector>

#include "object.h"
#include "vector2.h"
#include "force.h"

class Body : public Object {
    protected:
        float dt;

        float mass;

        Vector2 r;  // position
        Vector2 v;  // velocity
        Vector2 a;  // acceleration

        std::vector<Force> F;

    public:
        Body(int FPS, float mass, Vector2 r, Vector2 v);
        ~Body();

        void setFPS(int FPS) {this->dt = 1.0/FPS;}
        void setMass(float mass) {this->mass = mass;}

        void setPos(Vector2 r) {this->r = r;}
        void setVel(Vector2 v) {this->v = v;}
        void setAcc(Vector2 a) {this->a = a;}

        float getMass() {return this->mass;}

        Vector2 getPos() {return this->r;}
        Vector2 getVel() {return this->v;}
        Vector2 getAcc() {return this->a;}

        void addForce(Force f);
        Force sumF();

        void Update();
};

#endif
