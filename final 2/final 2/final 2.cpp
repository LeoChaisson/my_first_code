// final 2.cpp : Defines the entry point for the console application.
// Application

#include "stdafx.h"
#include <iostream>
#include "Rational.h"
using namespace std;


int main()
{
	Rational r1;
	cout << "The rational number you defined is:\n";
	r1.display();
	cout << endl;
	Rational r2(2, 5);
	cout << "The rational number you defined is:\n";
	r2.display();
	cout << endl;
	return 0;
}