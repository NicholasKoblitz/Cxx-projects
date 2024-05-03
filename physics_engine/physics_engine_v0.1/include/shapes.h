#ifndef _SHAPES_H_
#define _SHAPES_H_

#include "physicsBody.h"
#include <vector>
#include "vec2.h"

class Box : public PhysicsBody {
public: 
	float width;
	float height;
	std::vector<Vec2> vertexes;
	
// Constructors
	Box() :
		PhysicsBody(),
		width(1),
		height(1),
		vertexes(calcVertexes()) {};
		
	Box(float width, float height, Vec2 pos, float mass) :
		PhysicsBody(pos, mass),
		width(width),
		height(height),
		vertexes(calcVertexes()) {};
	
// Methods
	
	
private:
	// Gets the box's vertexes and stores them from top right and then in a clockwise manner.
	std::vector<Vec2> calcVertexes() {
    std::vector<Vec2> temp;
		Vec2 tr = Vec2(position.x + (width/2), position.y + (height/2));
		Vec2 br = Vec2(position.x + (width/2), position.y - (height/2));
		Vec2 bl = Vec2(position.x - (width/2), position.y - (height/2));
		Vec2 tl = Vec2(position.x - (width/2), position.y + (height/2));
		
		temp.push_back(tr);
		temp.push_back(br);
		temp.push_back(bl);
		temp.push_back(tl);

    return temp;
	}
};


class Circle : public PhysicsBody {
public:
	float radius;
	
// Constructors
	Circle() : radius(1) {}
	Circle(float radius) : radius(radius) {}
};



#endif