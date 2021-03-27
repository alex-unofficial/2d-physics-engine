#ifndef VECTOR2
#define VECTOR2

class Vector2 {
    private:
        float x;
        float y;

    public:
        Vector2();
        Vector2(float x, float y);
        Vector2(const Vector2& v);

        float setX(float x) {this->x = x;}
        float setY(float y) {this->y = y;}

        float getX() const {return x;}
        float getY() const {return y;}
};

#endif
