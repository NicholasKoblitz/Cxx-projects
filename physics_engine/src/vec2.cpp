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
