#ifndef _VEC2_H_
#define _VEC2_H_
#endif

#include <cmath.h>

// Vector 2 Definition
typedef struct {
	float x;
	float y;
} Vec2;

// Vector 2 math Declerations
Vec2 add(Vec2 a, Vec2 b);
Vec2 sub(Vec2 a, Vec2 b);
void scale_up(Vec2 &a, float b);     // Vector multiplcation
void scale_down(Vec2 &a, float b);   // Vector division
float length(Vec2 a);               // Returns the magnatude of a vector
void set_length(Vec2 &a);           // Sets the magnatude of a vector
void normalize(Vec2 &a);            // Turns existing vector to a unit vector
float dist(Vec2 a, Vec2 b);         // Returns the distance betweb two vextors