// midterm 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2, s3, s4, s5;
	
	cout << "Enter 3 strings. \n";
	cin >> s1 >> s2 >> s3;
	s4 = s1 + s2;
	s5 = s1 + s3;
	cout << "The fourth string is " << s4 <<endl;
	cout << "The fifth string is " << s5<< endl;
	if (s4 == s5)
	{
		cout << "String 4 and string 5 are equal!\n";
	}
	else
	{
		cout <<"String 4 and string 5 are not equal.\n";

	}
	return 0;
}
