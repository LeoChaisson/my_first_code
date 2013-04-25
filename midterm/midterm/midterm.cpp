// midterm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Plane
{
public:
	Plane();
	Plane(double a, double b);
	int quad();
	double getx();
	double gety();
	void setx(double a);
	void sety(double b);
private:
	double x;
	double y;
};

int main()
{
	int x,y;
	cout << "Enter x then y\n";
	cin >> x >> y;
	if(x>0 && y>0)
	{
		cout<< "Quadrant 1 \n";
	}
	if(x<0 && y>0)
	{
		cout<< "Quadrant 2 \n";
	}
	if(x<0 && y<0)
	{
		cout<< "Quadrant 3 \n";
	}
	if(x>0 && y<0)
	{
		cout<< "Quadrant 4 \n";
	}
	if(x=0)
	{
		cout<< "The point is on the y axis";
	}
	if(y=0)
	{
		cout<< "The point is on the x axis";
	}
	return 0;
}
