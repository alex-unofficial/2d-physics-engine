#ifndef VECTOR2
#define VECTOR2

#include <iostream>

class Vector2 {
    private:
        float x;
        float y;

    public:
        Vector2();
        Vector2(float x, float y);

        Vector2(float r[]);

        Vector2(const Vector2& v);

        void setX(float x) {this->x = x;}
        void setY(float y) {this->y = y;}

        float getX() {return x;}
        float getY() {return y;}

        /* operations */

        // equality and inequality
        friend bool operator==(Vector2 a, Vector2 b);
        friend bool operator!=(Vector2 a, Vector2 b);
        
        // norm
        float norm();
        float angle();

        // vector addition and subtraction
        friend Vector2 operator+(Vector2 a, Vector2 b);
        void operator+=(Vector2 b);

        friend Vector2 operator-(Vector2 v);
        friend Vector2 operator-(Vector2 a, Vector2 b);
        void operator-=(Vector2 b);

        // vector scaling
        friend Vector2 operator*(float k, Vector2 v);
        friend Vector2 operator*(Vector2 v, float k);
        void operator*=(float k);

        // inner product 
        friend float operator*(Vector2 a, Vector2 b);

        // cross product
        friend float operator%(Vector2 a, Vector2 b);

        friend std::ostream &operator<<(std::ostream &output, Vector2 v);
};

#endif
