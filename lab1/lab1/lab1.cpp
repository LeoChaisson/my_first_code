// lab1.cpp : Defines the entry point for the console application.
// Leo Chaisson
// Comp201 09-10

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream fin;
	ofstream fout;

	fin.open("lab1input.txt");
	if(fin.fail())
	{
		cout << "File failed to open!\n";
		exit(1);
	}

	fout.open("lab1output.txt");
	if(fout.fail())
	{
		cout << "File failed to open!\n";
		exit(1);
	}

	double next, sum=0;
	int count=0;
	cout << "X\tX^2\tCurrent sum\n";   // \t means tab
	cout << "===\t===\t============\n";

	while(fin >> next)
	{
		//accumulate, count, then display
		sum = sum + next;
		count++;
		cout << next << "\t" << next*next << "\t" << sum << endl;
	}

	double average = sum/count;
	cout << "\nThe average of these " << count << " number is " << average << endl;

	fin.close();
	fout.close();

	return 0;
}

/*
X       X^2     Current sum
===     ===     ============
4       16      4
4       16      8
4       16      12
4       16      16
4       16      20
4       16      24
4       16      28
4       16      32

The average of these 8 number is 4
Press any key to continue . . .

