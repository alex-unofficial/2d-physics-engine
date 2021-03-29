#include <iostream>
#include <cmath>

#include "vector2.h"

Vector2::Vector2() {
    this->x = 0;
    this->y = 0;
}

Vector2::Vector2(float x, float y) {
    this->x = x;
    this->y = y;
}

Vector2::Vector2(float r[]) {
    this->x = r[0];
    this->y = r[1];
}

Vector2::Vector2(const Vector2& v) {
    this->x = v.x;
    this->y = v.y;
}

// operations
bool operator==(Vector2 a, Vector2 b) {
    return (a.x == b.x) && (a.y == b.y);
}

bool operator!=(Vector2 a, Vector2 b) {
    return (a.x != b.x) || (a.y != b.y);
}

float Vector2::norm() {
    return sqrt(x*x + y*y);
}

float Vector2::angle() {
    return atan2(y, x);
}

Vector2 Vector2::unit() {
    return *this / this->norm();
}

Vector2 operator+(Vector2 a, Vector2 b) {
    return Vector2(a.x + b.x , a.y + b.y);
}

void Vector2::operator+=(Vector2 b) {
    *this = *this + b;
}

Vector2 operator-(Vector2 v) {
    return Vector2(-v.x, -v.y);
}

Vector2 operator-(Vector2 a, Vector2 b) {
    return a + (-b);
}

void Vector2::operator-=(Vector2 b) {
    *this = *this - b;
}

Vector2 operator*(float k, Vector2 v) {
    return Vector2(k * v.x , k * v.y);
}

Vector2 operator*(Vector2 v, float k) {
    return Vector2(k * v.x , k * v.y);
}

void Vector2::operator*=(float k) {
    *this = *this * k;
}

Vector2 operator/(Vector2 v, float k) {
    return Vector2(v.x /k , v.y /k);
}

void Vector2::operator/=(float k) {
    *this = *this / k;
}

float operator*(Vector2 a, Vector2 b) {
    return a.x * b.x + a.y * b.y;
}

float operator%(Vector2 a, Vector2 b) {
    return a.x * b.y - a.y * b.x;
}

std::ostream &operator<<(std::ostream &output, Vector2 v) {
    output << "(" << v.x << "," << v.y << ")";
}
