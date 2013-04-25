// hw4.cpp : Defines the entry point for the console application.
// Leo Chaisson
// Comp201 09-10

#include "stdafx.h"
#include<iostream> 
#include<cstdlib> 
using std::cin;
using std::cout;
using std::endl;
class AltMoney 
{ 
public: 
 	AltMoney(); 
 	AltMoney(int d, int c); 
 	friend AltMoney operator +(AltMoney m1, AltMoney m2); 
	friend AltMoney operator %(AltMoney income, AltMoney expenditure);
	friend bool operator > (AltMoney m1, AltMoney m2);
	friend bool operator < (AltMoney m1, AltMoney m2);
 	void display_money( ); 
 private: 
 	int dollars; 
 	int cents; 
}; 
void read_money(int& d, int& c); 
int main( ) 
{ 
 	int d, c; 
 	AltMoney sum, temp; 
 	read_money(d, c); 
 	AltMoney m1(d, c);
 	cout << "The first money is:";
 	m1.display_money(); 
 	read_money(d, c); 
 	AltMoney m2(d, c);
 	cout << "The second money is:"; 
 	m2.display_money(); 
 	sum = m1+m2; 
 	cout << "The sum is:"; 
 	sum.display_money();
	temp = m1%m2;
	cout << "% overload output";
	temp.display_money();
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
AltMoney operator +(AltMoney m1, AltMoney m2) 
{ 
     AltMoney temp; 
     int extra = 0; 
     temp.cents = m1.cents + m2.cents; 
     if(temp.cents >=100){ 
         temp.cents = temp.cents - 100; 
         extra = 1; 
      } 
      temp.dollars = m1.dollars + m2.dollars + extra; 
      return temp; 
} 


bool operator < (AltMoney m1, AltMoney m2)
{
	int n1,n2;
	n1=m1.dollars*100+m1.cents;
	n2=m2.dollars*100+m1.cents;
	if(n1<n2)
		return true;
	else return false;
}
bool operator > (AltMoney m1, AltMoney m2)
{
	int n1,n2;
	n1=m1.dollars*100+m1.cents;
	n2=m2.dollars*100+m1.cents;
	if(n1>n2)
		return true;
	else return false;
}

void read_money(int& d, int& c) 
{ 
 	cout << "Enter dollar \n"; 
 	cin >> d; 
 	cout << "Enter cents \n"; 
 	cin >> c; 
 	if( d < 0 || c < 0) 
 	{ 
 		cout << "Invalid dollars and cents, negative values\n"; 
 		exit(1); 
 	 }
}

AltMoney operator %(AltMoney income, AltMoney expenditure)
{
	if (income > expenditure)
		return income;
	else if (income < expenditure)
		return expenditure;
	else
		return (income + expenditure);
}




