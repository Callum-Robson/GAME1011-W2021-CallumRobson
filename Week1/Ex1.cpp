#include <iostream>

//This is a circle class

class Circle
{
private:
	double radius;
public:
	void setRadius(double r)
	{
		radius = r;
	}
	double calcArea()
	{
		return 3.14 * pow(radius, 2);
	}
};
