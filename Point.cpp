#include "Point.h"
#include <iostream>
using namespace std;

Point::Point()
{
	cout << "Construct\n";
	a = b = c = 0;
}

Point::Point(int a1, int b1, int c1)
{
	cout << "Construct by 3 param\n";
	a = a1;
	b = b1;
	c = c1;
}

void Point::Init()
{
	a = rand() % 10;
	b = rand() % 10;
	c = rand() % 10;
}

void Point::Init(int a1, int b1, int c1)
{
	a = a1;
	b = b1;
	c = c1;
}

void Point::Output()
{
	cout << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl;
}