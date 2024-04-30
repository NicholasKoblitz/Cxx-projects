#ifndef _SHAPES_H_
#define _SHAPES_H_

#include "physicsBody.h"

class Box : public PhysicsBody {
public: 
	float width;
	float height:
	std::vector<Vec2> vertexes;
	
// Constructors
	Box() : width(1), height(1), mass(1), vertexes(calcVertexes());
	Box(width, height, mass) : width(width), height(height), mass(mass), vertexes(calcVertexes());
	
// Methods
	
	
private:
	// Gets the box's vertexes and stores them from top right and then in a clockwise manner.
	void calcVertexes() {
		Vec2 tr = Vec2(position.x + (width/2), position.y + (height/2));
		Vec2 br = Vec2(position.x + (width/2), position.y - (height/2));
		Vec2 bl = Vec2(position.x - (width/2), position.y - (height/2));
		Vec2 tl = Vec2(position.x - (width/2), position.y + (height/2));
		
		vertexes.push_back(tr);
		vertexes.push_back(br);
		vertexes.push_back(bl);
		vertexes.push_back(tl);
	}
}


class Circle : public PhysicsBody {
public:
	float radius;
	
// Constructors
	Circle() : radius(1);
	Circle(radius) : radius(radius);
}



#endif