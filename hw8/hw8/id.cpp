#include "stdafx.h"
#include <iostream>
#include "id.h"
using namespace std; 

// This part part will go to the ID.cpp file 
ID::ID( ) 
{ 
   // use default values 
} 
ID::ID(int l, int m, int r) 
{ 
     left = l; 
     middle = m; 
     right = r; 
} 
void ID::display() 
{ 
     cout << left << "-" << middle << "-" << right << endl; 
} 