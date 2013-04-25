// lab4.cpp : Defines the entry point for the console application.
// Leo Chaisson
// Lab 4
// 201 09-10

#include "stdafx.h"
#include<iostream> 
#include<cstdlib> 
using namespace std; 

class AltMoney 
{ 
    public: 
        AltMoney(); 
        AltMoney(int d, int c); 
        friend AltMoney add(AltMoney m1, AltMoney m2); 
        void display_money( ); 
		void read_money( );
    private: 
        int dollars; 
        int cents; 
}; 

int main( ) 
{  
     AltMoney sum; 
     AltMoney m1; 
	 m1.read_money();
     cout << "The first money is:";
     m1.display_money(); 
     AltMoney m2; 
	 m2.read_money();
     cout << "The second money is:"; 
     m2.display_money(); 
     sum = add(m1,m2);
     cout << "The sum is:"; 
     sum.display_money(); 
     return 0; 
} 
AltMoney::AltMoney() 
{ 
      dollars = 0;
      cents = 0;
} 
AltMoney::AltMoney(int d, int c) 
{ 
       dollars = d; 
       cents = c; 
} 
void AltMoney::display_money() 
{ 
     cout << "$" << dollars << "."; 
     if(cents <= 9) 
         cout << "0";  //to display a 0 in the left for numbers less than 10 
     cout << cents << endl; 
} 
AltMoney add(AltMoney m1, AltMoney m2) // dont need AltMoney:: because its a friend function
{ 
     int extra = 0; 
	 AltMoney sum; //local variable
     sum.cents = m1.cents + m2.cents; 
     if(sum.cents >=100){ 
         sum.cents = sum.cents - 100; 
         extra = 1; 
      } 
      sum.dollars = m1.dollars + m2.dollars + extra; 
	  return sum; // you have to add a return statement because it is not a void function anymore
} 
void AltMoney::read_money() 
{ 
     cout << "Enter dollar \n"; 
     cin >> dollars; 
     cout << "Enter cents \n"; 
     cin >> cents; 
     if( dollars < 0 || cents < 0) 
     { 
            cout << "Invalid dollars and cents, negative values\n"; 
            exit(1); 
      } 
} 

/*
Enter dollar
10
Enter cents
25
The first money is:$10.25
Enter dollar
5
Enter cents
25
The second money is:$5.25
The sum is:$15.50