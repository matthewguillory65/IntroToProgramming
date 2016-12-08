#pragma once

using namespace std;
//Matthew Guillory
//Student code: MG1149



//Needs to have: Point, Rectangle, Circle, Line, and Triangle.
//All shapes need to have a common base class called: BaseShape.
//BaseShape needs to define a pure virtual function called : void DebugPrint()
//Each shape's implementation pf DebugPrint should print out all attributes
//for the shape. How the string is formatted is up to me.
//Everything else is up to me, what the attributes each shape is made up of,
//how those attributes are accessed, etc.

class BaseShape//This will be the common base class
{
public:
	BaseShape() {}
protected:
	virtual void DebugPrint() = 0;
};

class Point : public BaseShape //Will display a point on a grid
{
public:
	virtual void DebugPrint()
	{
		cout << "This is a point: \n" << m_x << ", " << m_y << endl;
	}
	Point() {}//Default constructor
	//Defined: A single spot/dot on a grid
	Point(float x, float y)
	{
		m_x = x;
		m_y = y;


	}
	float m_x;
	float m_y;


};

class Rectangle : public BaseShape //Will display a rectangle on a grid
{
public:
	virtual void DebugPrint()
	{

	}
	Rectangle() {}//Default constructor
	//Defined: 4 sides, opposite sides are always equal, but adjacent sides
	//are not
	Rectangle(float x, float y)
	{
		m_x = x;
		m_y = y;
	}
private:
	float m_x;
	float m_y;

};

class Circle : public BaseShape //Will display a cirlce on a grid
{
public:
	virtual void DebugPrint()
	{

	}
	Circle() {}//Default constructor
	//Defined: No edges, no corners, round
	Circle(float x, float y)
	{
		m_x = x;
		m_y = y;
	}
private:
	float m_x;
	float m_y;

};

class Line : public BaseShape //Will display a line on a grid
{
public:
	virtual void DebugPrint()
	{
		cout << m_x << ", " << m_y << endl;
	}
	Line() {}//Default constructor
	//Defined: from one point to another
	
	Line(Point x, Point y)
	{
		m_x = x;
		m_y = y;
	}
private:
	Point m_x;
	Point m_y;


};

class Triangle : public BaseShape //Will display a triangle on a grid
{
public:
	virtual void DebugPrint()
	{

	}
	Triangle() {}//Default constructor
	//Defined: 3 points, all connected to make a closed shape, sides can all be 
	//different sizes
	Triangle(float x, float y)
	{
		m_x = x;
		m_y = y;
	}
private:
	float m_x;
	float m_y;
};