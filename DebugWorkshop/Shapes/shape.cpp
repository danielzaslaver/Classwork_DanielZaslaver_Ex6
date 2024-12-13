#include "Shape.h"

//adding parameters for shape constructor
Shape::Shape(float area, float perimeter) : _area(area), _perimeter(perimeter)
{

}

float Shape::get_area() const
{
	return _area;
}
