// lab9.cpp : Defines the entry point for the console application.
// Leo Chaisson


#include "stdafx.h"
#include<iostream> 
using namespace std; 
namespace cm 
{ 
       double weight(double length, double width); 
} 
namespace meter 
{ 
       double weight(double length, double width); 
} 
double area_km(double length, double width); 
int main ( ) 
{ 
      double length, width;  // dimension of a rectangle 
      double A;  // area of a rectangle 
       cout << "Enter the length and the width of the rectangle. \n"; 
       cout << "Assuming unit is meter \n"; 
       cin >> length >> width; 
       { 
                using namespace cm; 
                A = weight(length, width); 
                cout << "Amount of paint is: " << A << "mg"<< endl; 
        } 
        { 
                using namespace meter; 
                A = weight(length, width); 
                cout << "Amount of paint  is: " << A << "kg" << endl; 
         } 
         A = area_km(length, width); 
         cout << "Area is: " << A << "Ton" << endl; 
         return 0; 
} 
namespace cm 
{ 
    double weight(double length, double width) 
    { 
              cout << "From namespace cm, I am sending area in cm^2 back\n"; 
              return 22*(length*100)*(width*100); 
     } 
} 
namespace meter 
{ 
    double weight(double length, double width) 
    { 
              cout << "From namespace meter, I am sending area in m^2 back\n"; 
              return .2*length*width; 
     } 
} 
double area_km(double length, double width) 
{ 
              cout << "From std namespace,  I am sending area in km^2 back\n"; 
              return 196*(length/1000)*(width/1000); 
 } 
