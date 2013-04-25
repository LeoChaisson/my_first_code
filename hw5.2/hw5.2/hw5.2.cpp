// hw5.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vectorObject;
  int i;

  for(i = 0; i <10; i++) 
      vectorObject.push_back(i);

  cout << "Initial: ";
  for(i = 0; i <vectorObject.size(); i++) 
     cout << vectorObject[i] << " ";
  cout << endl;

 
  cout << "Reversed: ";
  for(i = vectorObject.size()-1; i >= 0; i--) 
     cout << vectorObject[i] << " ";
  cout << endl;

  return 0;
}
/*
Initial: 0 1 2 3 4 5 6 7 8 9
Reversed: 9 8 7 6 5 4 3 2 1 0
*/


