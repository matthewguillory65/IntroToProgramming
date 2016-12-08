#include <iostream>
#include <fstream>
#include "Shapes.h"

using namespace std;

int main()
{
	//Points

	//Point
	Point m_point_0 = Point(1, 1);

	//Line
	Point m_point_1 = Point(1, 1);
	Point m_point_2 = Point(4, 4);

	//Rectangle
	Point m_point_3 = Point(1, 1);
	Point m_point_4 = Point(1, 4);
	Point m_point_5 = Point(4, 4);
	Point m_point_6 = Point(4, 1);

	//Triangle
	Point m_point_7 = Point(1, 1);
	Point m_point_8 = Point(3, 3);
	Point m_point_9 = Point(5, 5);

	//Circle
	Point m_point_10 = Point();

	//Lines to make the shapes:

	//Line
	Line m_line1 = Line(m_point_1, m_point_2);

	//Rectangle
	Line m_line2 = Line(m_point_3, m_point_4);
	Line m_line3 = Line(m_point_4, m_point_5);
	Line m_line4 = Line(m_point_5, m_point_6);
	Line m_line5 = Line(m_point_6, m_point_3);

	//Rectangle
	Line m_line6 = Line(m_point_7, m_point_8);
	Line m_line7 = Line(m_point_8, m_point_9);
	Line m_line8 = Line(m_point_9, m_point_7);


	m_point_1.DebugPrint();
	m_line1.DebugPrint();

	system("pause");
	return 1;
}