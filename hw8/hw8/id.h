// This part will go to ID.h file 
#ifndef id_h
#define id_h

#include<iostream> 
using namespace std; 
class ID 
{ 
    public: 
        ID( ); 
        ID(int, int, int); 
        void display(); 
    private: 
        int left; 
        int middle; 
        int right; 
}; 
#endif