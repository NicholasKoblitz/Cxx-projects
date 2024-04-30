#ifndef _PHYSICSBODY_H_
#define _PHYSICSBODY_H_

#include "vec2.h"
#include "shapes.h"

class PhysicsBody {
public:
// Properties
	Vec2 position;
	Vec2 velocity;
	Vec2 acceleration;
	Vec2 force;
	float mass;
	
}

#endif