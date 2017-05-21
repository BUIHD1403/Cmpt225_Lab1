#pragma once
// circle.h file
// Description: This class modesl a rectangle ...
// Author:
// Creation date:

class circle {

private: // Everything that follows is private and cannot be "seen" and 
		 // accessed from outside the class
		 // Some classes have private methods like our Temperature class. This one doesn't!
	int x_coordinate;
	int y_coordinate;
	double radius;

public: //everything that follows is public
		//Default constructor
	circle(); //the default constructor has no parameters
				 // Constructor to create a new rectangle with the given values
	circle(int x, int y, double r);

	// Getters that return information about the rectangle, 
	// note the const at the end of the method
	// this guarantees that the method cannot alter the member variables
	int getX() const;
	int getY() const;
	double getRadius() const;
	double getArea();

	// Setters that change the values of the attributes
	void move(int horiz,int vert);
	void setRadius(double r);

	// Compute the area of "this" rectangle
	//int computeArea() const;

	// Display method that prints the rectangle's height and width
	void displayCircle() const;

}; //Rectangle - note the ";" - don't forget it!
   // End of the header file