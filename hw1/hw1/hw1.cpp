// hw1.cpp : Defines the entry point for the console application.
// LeoChaisson
// Comp201 09-10

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream fin;
	ofstream fout;

	fin.open("hw1input.txt");
	if(fin.fail())
	{
		cout << "File failed to open!\n";
		exit(1);
	}

	fout.open("hw1output.txt");
	if(fout.fail())
	{
		cout << "File failed to open!\n";
		exit(1);
	}

	double next, sum=0;
	int count=0;
	cout << "X\tX^2\tCurrent sum\n";   // \t means tab
	cout << "===\t===\t============\n";
	fout << "X\tX^2\tCurrent sum\n";   // \t means tab
	fout << "===\t===\t============\n";

	while(fin >> next)
	{
		//accumulate, count, then display
		sum = sum + next;
		count++;
		cout << next << "\t" << next*next << "\t" << sum << endl;
		fout << next << "\t" << next*next << "\t" << sum << endl;
	}

	double average = sum/count;
	cout.setf(ios::fixed);
	fout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	fout.setf(ios::showpoint);
	cout << "\nThe average of these " << count << " number is " << setprecision(2) << average << endl;
	fout << "\nThe average of these " << count << " number is " << setprecision(2) << average << endl;

	fin.close();
	fout.close();

	return 0;
}

/*
X       X^2     Current sum
===     ===     ============
75.5    5700.25 75.5
80      6400    155.5
100.1   10020   255.6
2.67    7.1289  258.27
198     39204   456.27
16      256     472.27

The average of these 6 number is 78.71
Press any key to continue . . .
