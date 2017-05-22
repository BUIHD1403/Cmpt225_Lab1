// circle.cpp file
// Description: This class modesl a rectangle ...
// Author: HuyThong Bui
// Creation date:

#include <iostream> // As we need to print data
#include "circle.h" // The header file for the class - we need this!

using namespace std;

// Now follows each of the method implementations. 
// The <class>:: that precedes each method indicates that the method belongs to the class. 
// If it is omitted, the compiler will attempt to create a separate function, 
// which is not what we want.

//Default constructor
circle::circle() : radius(10), x_coordinate(0), y_coordinate(0) {

}//circle()

 // Constructor to create a new circle with the given values
circle::circle(int x, int y, double r)
{
	x_coordinate = x;
	y_coordinate = y;
	radius = r;
	
}//Rectangle(int, int)

void circle::move(int h, int v)
{
	x_coordinate = x_coordinate + h;
	y_coordinate = y_coordinate + v;
	return ;
}
 // Getters that return information about the rectangle
int circle::getX() const
{
	return x_coordinate;
}//getWidth

int circle::getY() const
{
	return y_coordinate;
}//getHeight

double circle::getRadius() const
{
	return radius;
}

double circle::getArea()
{
	double area;
	area = radius*radius*3.14;
	return area;
}

void circle::setRadius(double r)
{
	if (r > 0.0)
	{
		radius = r;
	}
	else
		radius = 10.0;
}
 
// Display method that prints the rectangle's height and width
void circle::displayCircle() const
{
	cout << endl << "x_coordinate = " << getX();
	cout << ", y_coordinate = " << getY() << endl;
	cout << ", radius = " << getRadius() << endl;

}//displayRectangle

 // End of the implementation file