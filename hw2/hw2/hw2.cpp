// hw2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std; 
const int MAXSIZE = 20; 

void read_array(int n_array[], int& size); // array will be modified 
void write_array(const int n_array[], int size); // array will not be modified 
int index_of_smallest(const int n_array[], int start_index, int size);
int index_of_greatest(const int n_array[], int start_index, int size);
int average_value(const int n_array[], int start_index, int size);
int start_index;
int main(void) 
{ 
        int number_array[MAXSIZE]; 
        int size, i; 
        size = 0; 
        cout << "Enter up to 20 integers: "; 
        read_array(number_array, size); 
        write_array(number_array, size); 
		index_of_smallest(number_array, start_index, size);
		index_of_greatest(number_array, start_index, size);
		average_value(number_array, start_index, size);
        return 0; 
} 
void read_array(int n_array[], int& size) 
{ 
       int number; 
       do { 
		cin >> number;
		if(number > 0)
		{
			n_array[size] = number; 
			++size; 
		}
        } while (size < 20 && number != -1); 
} 
void write_array(const int n_array[], int size) 
{ 
        cout << "\nThe integers you entered are: \n"; 
        for (int i = 0; i<size; ++i) 
                cout << "Number " << i+1 << ": " << n_array[i] << endl; 
        cout << endl; 
} 
int index_of_smallest(const int n_array[], int start_index, int size) 
{ 
	int i;
     int min = n_array[start_index], index_of_min = start_index; 
     for(int i = start_index+1; i < size; i++) 
          if(n_array[i] < min ) 
          { 
                min = n_array[i]; 
                index_of_min = i; 
				
           } 
		  cout << "The smallest number you entered is " << min << endl;
          return min; 
} 
int index_of_greatest(const int n_array[], int start_index, int size) 
{ 
	int i;
     int max = n_array[start_index], index_of_max = start_index; 
     for(int i = start_index+1; i < size; i++) 
          if(n_array[i] > max ) 
          { 
                max = n_array[i]; 
                index_of_max = i; 
				
           } 
		  cout << "The greatest number you entered is " << max << endl;
          return max; 
} 

int average_value(const int n_array[], int start_index, int size)
{
	double temp = 0;
	
	for(int i = start_index; i < size; i++) 
	{
		temp += (double) n_array[i];
	}
	temp = temp / (double) size;
	cout << "The average is " << temp << endl;
	return temp;
}
/*
Enter up to 20 integers: 2
98
125
76
36
5
45
70
67
-1

The integers you entered are:
Number 1: 2
Number 2: 98
Number 3: 125
Number 4: 76
Number 5: 36
Number 6: 5
Number 7: 45
Number 8: 70
Number 9: 67

The smallest number you entered is 2
The greatest number you entered is 125
The average is 58.2222