#include "vec2.h"

// Vec2 method implamentations

Vec2::add(Vec2 a) {
	x += a.x;
	y += a.y;
};

Vec2::sub(Vec2 a) {
	x -= a.x;
	y -= a.y;
}

Vec2::scaleUp(unsigned int scalar) {
	x *= scalar;
	y *= scalar;
}

Vec2::scaleDown(unsigned int scalar) {
	x /= scalar;
	y /= scalar;
}

Vec2::getMag() {
	float tempx = x * x;
	float tempy = y * y;
	float mag = std::sqrtf(tempx + tempy);
	return mag;
}

Vec2::normalize() {
	float mag = getMag();
	x /= mag;
	y /= mag;
}

Vec2::setMag(unsigned int scalar) {
	normalize();
	scaleUp(scalar);
	
}