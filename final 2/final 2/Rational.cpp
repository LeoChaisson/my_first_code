//Implementation
#include "stdafx.h"
#include <iostream>
#include "Rational.h"
using namespace std;
Rational::Rational()
{
	numerator=0;
	denominator=0;
}
Rational::Rational(double n, int d)
{
	numerator=n;
	denominator=d;
}
void Rational::display()
{
	if (denominator == 0)
		cout << "0";
	else
		cout << numerator/denominator;
}
double Rational::getNumerator()
{
	return numerator;
}
int Rational::getDenominator()
{
	return denominator;
}