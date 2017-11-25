#pragma once

class vector3
{
public:
	float x = 0, y = 0, z = 0;

	inline vector3() {}
	inline vector3(const vector3& rhs)
		:x(rhs.x)
		, y(rhs.y)
		, z(rhs.z)
	{
		cout << "copy ctor is called.\n";
	}
	inline vector3(float x, float y, float z) :x(x), y(y), z(z)
	{
	}
	inline vector3& operator=(const vector3& rhs)
	{
		x = rhs.x;
		y = rhs.y;
		z = rhs.z;
		cout << "operator= is called.\n";
		return *this;
	}

};

