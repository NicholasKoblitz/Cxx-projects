#ifndef _WORLD_H_
#define _WORLD_H_

#include "vec2.h"
#include "physicsBody.h"
#include <vector.h>

class World{
public:
// properties 
	std::vector<PhysicsBody*> bodies;
	Vec2 gravity;
// Constructors

	world() : gravity(Vec2(0,0));
	world(Vec2 gravity) : gravity(gravity);

// Methods
	
// Adds a PhysicsBody to the world
	void addBody(PhysicsBody a);
	
// Steps through the physics simulation
	void step();
}

#endif