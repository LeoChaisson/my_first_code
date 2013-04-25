// lab6.cpp : Defines the entry point for the console application.
// Leo Chaisson
// Comp 201 09-10

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Area
{
public:
	Area();
 	void setu(string a);
 	void seta(float b);
 	string getu();
 	float geta();
private:
 	string unit;
 	float Area_value;
};


int _tmain(int argc, _TCHAR* argv[])
{
	Area *a1;
    string a;
    float b;
    a1 = new Area;
    cout << "Enter a unit of area\n"; 
    cin >> a; 
    a1->setu(a);
    cout << "Enter a value of area\n"; 
    cin >> b; 
    a1->seta(b); 
    cout << "Half the input = " << 0.5 * a1->geta() << " " << a1->getu() << endl; 
    cout << "A quarter of the input = " << 0.25 * a1->geta() << " " << a1->getu() << endl; 
    delete a1;

	return 0;
}

Area::Area()
{
	unit;
	Area_value = 0;
}
void Area::setu(string a)
{
	unit = a;
}
void Area::seta(float b)
{
	Area_value = b;
}
string Area::getu()
{
	return unit;
}
float Area::geta()
{
	return Area_value;
}
/*
Enter a unit of area
sqft
Enter a value of area
4
Half the input = 2 sqft
A quarter of the input = 1 sqft
*/