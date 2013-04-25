// hw5.cpp : Defines the entry point for the console application.
// Leo Chaisson
// HW5 part 1
// Comp201 09-10

#include "stdafx.h"
#include<iostream> 
#include<string> 
using namespace std; 

int main( ) 
{ 
    	string s1, s2; int i;

	cout << "Enter your inputs.\n";
	getline(cin, s1);
	getline(cin, s2);

	i = s1.find("G");
	while ((i >= 0) || (i <= s1.length()))
	{
		s1.at(i) = 'g';
        	i = s1.find("G");
	}

	i = s2.find("G");
	while ((i >= 0) || (i <= s2.length()))
	{
		s2.at(i) = 'g';
        	i = s2.find("G");
	}

	cout << "\nAfter change, your input is " << endl;
	cout << s1 << endl;
	cout << s2 << endl;

	return 0;
}

/*
Enter your inputs.
G++ is a script to call Gcc with options to recognize C++.
Gcc processes input files through one or more stages.

After change, your input is
g++ is a script to call gcc with options to recognize C++.
gcc processes input files through one or more stages.
/*