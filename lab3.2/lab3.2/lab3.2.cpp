// lab3.2.cpp : Defines the entry point for the console application.
// Lab 3.2
// Leo Chaisson
// Comp 201 09-10

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std; 

class Loan  
{ 
   public: 
      void input( ); 
      void payment( ); 
      void display( ); 
   private: 
      int ID;  // assume an unique integer between 1111-9999 
      float amount; // $ amount of the loan, e.g., 1000 
      float rate; // annual interest rate, e.g., 2 
      int term;  // number of months, length of the loan 
	  float mp; // monthly payment
 }; 
int main( ) 
{ 
	float p;
    Loan loan1; 
    loan1.input( );
	loan1.payment( );
	loan1.display( );

    return 0; 
} 
void Loan::input( ) // member function
{ 
       // Initialize the loan1 object 
      cout << "Enter the ID of this loan \n"; 
      cin >> ID; 
      cout << "Enter the amount of this loan \n"; 
      cin >> amount; 
      cout << "Enter the annual interest rate of this loan (in %) \n"; 
      cin >> rate; 
      cout << "Enter the term (number of months, length of the loan) \n"; 
      cin >> term; 
} 

void Loan::payment()
{
	float r;
	r = rate/1200;
	mp = (amount * r * pow((r+1), term))/(pow((r+1),term)-1);
}

void Loan::display()
{
	cout << "\nYour ID is " << ID << endl;
	cout << "Your amount loan is " << amount << endl;
	cout << "Your APR is " << rate << endl;
	cout << "Your length of loan is " << term << endl;
	cout << "The monthly payment of the loan is " << mp << endl;
}
/*
Enter the ID of this loan
1111
Enter the amount of this loan
1000
Enter the annual interest rate of this loan (in %)
2
Enter the term (number of months, length of the loan)
12

Your ID is 1111
Your amount loan is 1000
Your APR is 2
Your length of loan is 12
The monthly payment of the loan is 84.2402



