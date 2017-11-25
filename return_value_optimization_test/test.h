#pragma once 

#include "vector3.h"

inline vector3 foo(float x, float y, float z)
{
	vector3 a(x, y, z);
	a.x++;
	a.y++;
	a.z++;
	return a;
}

/*
inline void foo(float x, float y, float z, vector3& output)
{
	output.x = x + 1;
	output.y = y + 1;
	output.z = z + 1;
}*/