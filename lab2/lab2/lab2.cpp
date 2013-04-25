// lab2.cpp : Defines the entry point for the console application.
// Lab 2.1
// Leo Chaisson
// Comp 201 09-10

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int age;
	int student = 0;
	int adult = 0;
	int senior = 0;
	
	do
	{
		cout << "What is your age?\n";
		cin >> age;
		if (17 < age && age < 65)
		adult = adult + 1;
		if (age < 18 && age > 0)
		student = student + 1;
		if (age > 64)
		senior = senior + 1;
	}
	while (age != -1);

	cout << student << " student(s) boarded\n";
	cout << adult << " adult(s) boarded\n";
	cout << senior << " senior(s) boarded\n";
	return 0;
}

/*
What is your age?
12
What is your age?
14
What is your age?
16
What is your age?
19
What is your age?
24
What is your age?
56
What is your age?
64
What is your age?
68
What is your age?
78
What is your age?
-1
3 student(s) boarded
4 adult(s) boarded
2 senior(s) boarded

