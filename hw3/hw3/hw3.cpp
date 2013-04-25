// hw3.cpp : Defines the entry point for the console application.
// HW3
// Leo Chaisson
// Comp201 09-10

#include "stdafx.h"
#include<iostream> 
using namespace std;

class Loan  
{ 
    public: 
     Loan( ); // constructor
     Loan(int ID, float amount, float rate, int term);
     void input(); 
     int getID();  // int Loan::getID( ) {return ID; }
     float getAmount();
     float getRate(); 
     int getTerm();
     void display( ); 
   private: 
     int ID;  // assume an unique integer between 1111-9999 
     float amount; // $ amount of the loan 
     float rate; // annual interest rate 
     int term;  // number of months, length of the loan 
 }; 
int main( ) 
{ 
    Loan loan1(1234, 2300, 5.5, 48);  // initialize to values given 
    Loan loan2 (0,0,0,0);  // use the default values 
    Loan loan3; 
    Loan loan4 = loan1; 
    cout << "Display loan1 \n"; 
    loan1.display(); 
    cout << "\nDisplay loan2 \n"; 
    loan2.display(); 
    cout << "\nDisplay loan4 \n"; 
    loan4.display(); 
    
    cout << endl << "Input of Loan 3\n";
    loan3.input( ); 
    cout << "\nDisplay loan3\n"; 
    loan3.display();    
    return 0; 
} 
Loan::Loan( ) 
{ 
// Body intentionally kept empty so the default values are used. 
} 
Loan::Loan(int I, float am, float rt, int trm) 
{ 
	ID = I;
	amount = am;
	rate = rt;
	term = trm;
} 
void Loan::input( ) 
{ 
      cout << "Enter the ID of this loan \n"; 
      cin >> ID; 
      cout << "Enter the amount of this loan \n"; 
      cin >> amount; 
      cout << "Enter the annual interest rate of this loan (in %) \n"; 
      cin >> rate; 
      cout << "Enter the term (number of months, length of the loan) \n"; 
      cin >> term; 
}
void Loan::display() 
{ 
	cout << "\nYour ID is " << ID << endl;
	cout << "Your amount loan is " << amount << endl;
	cout << "Your APR is " << rate << endl;
	cout << "Your length of loan is " << term << endl;
}

/*
Display loan1

Your ID is 1234
Your amount loan is 2300
Your APR is 5.5
Your length of loan is 48

Display loan2

Your ID is 0
Your amount loan is 0
Your APR is 0
Your length of loan is 0

Display loan4

Your ID is 1234
Your amount loan is 2300
Your APR is 5.5
Your length of loan is 48

Input of Loan 3
Enter the ID of this loan
1111
Enter the amount of this loan
1000
Enter the annual interest rate of this loan (in %)
2
Enter the term (number of months, length of the loan)
12

Display loan3

Your ID is 1111
Your amount loan is 1000
Your APR is 2
Your length of loan is 12

