#ifndef _VEC2_H_
#define _VEC2_H_


class Vec2 {
public:
	// Vector properties
	float x;
	float y;
	
	// constructors
  Vec2() : x(0.0), y(0.0) {};
	Vec2(float x, float y) : x(x), y(y) {};
	
	// Adds a vector to current vector
	void add(Vec2 a);

	// Subtracts a vector from the current vector	
	void sub(Vec2 a);
	
	// Scales the vector up based on given scalar
	void scaleUp(unsigned int scalar);
	
	// Scales the vector down based on given scalar
	void scaleDown(unsigned int scalar);
	
	// Gets the magnatude of a vector
	unsigned int getMag();
	
	// Normalizes the vector - makes it a unit vector
	void normalize();
	
	// sets the magnatude of the vector
	void setMag(unsigned int scalar);
};

#endif