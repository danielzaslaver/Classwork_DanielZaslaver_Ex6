#include "triangle.h"
#include <exception>

//adding a call for shape constructor
Triangle::Triangle(float base, float height) : Shape(float(0.5 * base * height), 0), _base(base), _height(height)
{
}

float Triangle::get_area(bool has_depth) const
{
	if (has_depth)
	{
		throw std::exception("3D triangle is not implemented yet!");
	}

	return float(0.5 * _base * _height);
}
