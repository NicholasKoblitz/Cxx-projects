#ifndef _PHYSICSBODY_H_
#define _PHYSICSBODY_H_

#include "vec2.h"

class PhysicsBody {
public:
// Properties
	Vec2 position;
	Vec2 velocity;
	Vec2 acceleration;
	Vec2 force;
	float mass;
	
	// Constructors
	PhysicsBody() : 
		position(Vec2(0,0)),
		velocity(Vec2(0,0)),
		acceleration(Vec2(0,0)),
		force(Vec2(0,0)),
		mass(1.0) {};
		
	PhysicsBody(Vec2 pos, float mass) :
		position(pos),
		velocity(Vec2(0,0)),
		acceleration(Vec2(0,0)),
		force(Vec2(0,0)),
		mass(mass) {};
	
	// Methods
	
	
};

#endif