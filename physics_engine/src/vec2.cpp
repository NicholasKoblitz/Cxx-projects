#include "../include/vec2.h"

Vec2 add(Vec2 a, Vec2 b) {
    float x = a.x + b.x;
    float y = a.y + b.y;
    Vec2 z = Vec2{x, y};
    return z;
}

Vec2 sub(Vec2 a, Vec2 b) {
    float x = a.x - b.x;
    float y = a.y - b.y;
    Vec2 z = Vec2{x, y};
    return z;
}

void scale_up(Vec2 &a, float b) {
    a.x *= b;
    a.y *= b;
}

void scale_down(Vec2 &a, float b) {
    a.x /= b;
    a.y /= b;
}

float length(Vec2 a) {
    float len = std::sqrt((a.x * a.x) + (a.y * a.y));
    return len;
}