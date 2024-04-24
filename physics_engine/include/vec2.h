#ifndef _VEC2_H_
#define _VEC2_H_
#endif

// Vector 2 Definition
typedef struct {
	float x;
	float y;
} Vec2;

// Vector 2 math Declerations
Vec2 add(Vec2 a, Vec2 b);
Vec2 sub(Vec2 a, Vec2 b);
void scale_up(Vec2 *a, float b);     // Vector multiplcation
void scale_down(Vec2 *a, float b);  // Vector division