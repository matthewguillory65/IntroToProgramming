#pragma once

//Needs to have: Point, Rectangle, Circle, Line, and Triangle.
//All shapes need to have a common base class called: BaseShape.
//BaseShape needs to define a pure virtual function called : void DebugPrint()
//Each shape's implementation pf DebugPrint should print out all attributes
//for the shape. How the string is formatted is up to me.
//Everything else is up to me, what the attributes each shape is made up of,
//how those attributes are accessed, etc.

class BaseShape//This will be the common base class
{
private:
	

public:

	float x, y;
	BaseShape() {}
	BaseShape(float xpos, float ypos)
	{
		x = xpos, y = ypos;
	}

	virtual void DebugPrint() = 0;
};

class Point : public BaseShape //Will display a point on a grid
{
	int posa = (x = 1, y = 1);//only point

	Point() {}//Default constructor
	//Defined: A single spot/dot on a grid
	void DebugPrint()
	{
		
	}


};

class Rectangle : public BaseShape //Will display a rectangle on a grid
{
	int posa = (x = 1, y = 1);//first point
	int posb = (x = 3, y = 1);//second point
	int posc = (x = 3, y = 5);//third point
	int posd = (x = 1, y = 5);//fourth point

	Rectangle() {}//Default constructor
	//Defined: 4 sides, opposite sides are always equal, but adjacent sides
	//are not
	void DebugPrint()
	{
	
	}


};

class Circle : public BaseShape //Will display a cirlce on a grid
{
	int posa = (x = 0, y = 0);//Center

	Circle() {}//Default constructor
	//Defined: No edges, no corners, round
	void DebugPrint()
	{
		
	}

};

class Line : public BaseShape //Will display a line on a grid
{
	int posa = (x = 1, y = 1);//first point
	int posb = (x = 1, y = 3);//second point

	Line() {}//Default constructor
	//Defined: from one point to another
	void DebugPrint()
	{
		
	}


};

class Triangle : public BaseShape //Will display a triangle on a grid
{
	int posa = (x = 1, y = 1);//first point
	int posb = (x = 2, y = 2);//second point
	int posc = (x = 3, y = 1);//third point

	Triangle() {}//Default constructor
	//Defined: 3 points, all connected to make a closed shape, sides can all be 
	//different sizes
	void DebugPrint()
	{
		
	}


};