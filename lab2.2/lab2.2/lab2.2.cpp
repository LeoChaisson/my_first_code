// lab2.2.cpp : Defines the entry point for the console application.
// Lab 2.2
// Leo Chaisson
// Comp 201 09-10

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int rows, cols, r, c;

	cout << "How many rows?\n";
	cin >> rows;
	cout << "How many columns?\n";
	cin >> cols;
 
	for(r = 1; r <= rows; r++)
	{
		for(c = 1; c <= cols; c++)
		{
			cout << c*r << "\t";
		}
		cout << endl;
	}

	return 0;
}

/*
How many rows?
4
How many columns?
5
1       2       3       4       5
2       4       6       8       10
3       6       9       12      15
4       8       12      16      20

