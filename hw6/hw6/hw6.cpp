// hw6.cpp : Defines the entry point for the console application.
// Leo Chaisson
// Comp 201 09-10

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class student
{
public:
	student();
 	void setid(string a);
 	void setname(string b);
 	string getid();
 	string getname();
private:
 	string id;
 	string name;
};

int main () 
{  
   string a;
   string b;

	int SIZE; 
   cout<<"Enter the number of students"<<endl; 
   cin>>SIZE;
   
   student *studentlist = new student [SIZE]; 
    // Read SIZE students from the keyboard 
    for (int i = 0; i<SIZE; i++ ) 
   { 
       cout << "Enter the student id" << i+1 << ": "; 
       cin >> a; 
	   studentlist[i].setid(a);
	   cout << "Enter the student name" << i+1 << ": "; 
       cin >> b; 
	   studentlist[i].setname(b);
    } 
	cout << endl;
    // Display the students
    for (int j = 0; j <SIZE; j++ ) 
   { 
       cout << "Student" << j+1 << ": "; 
       cout << studentlist[j].getid()<< endl;
	   cout << "Name" << j+1 << ": "; 
       cout << studentlist[j].getname()<< endl << endl; 
    
	}
   delete[] studentlist; 
   return 0; 
} 

student::student()
{
	id;
	name;
}
void student::setid(string a)
{
	id = a;
}
void student::setname(string b)
{
	name = b;
}
string student::getid()
{
	return id;
}
string student::getname()
{
	return name;
}

/*
Enter the number of students
3
Enter the student id1: 11
Enter the student name1: john
Enter the student id2: 22
Enter the student name2: helen
Enter the student id3: 33
Enter the student name3: ariel

Student1: 11
Name1: john

Student2: 22
Name2: helen

Student3: 33
Name3: ariel
*/