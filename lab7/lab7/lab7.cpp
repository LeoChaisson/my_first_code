// lab7.cpp : Defines the entry point for the console application.
// Leo Chaisson
// comp 201 09-10

#include "stdafx.h"
#include <iostream> 
#include <cstddef> 
#include <string> 
using namespace std; 

struct Node 
{ 
    string item, date;  
    Node *link; 
}; 
typedef Node* NodePtr; 
void head_insert(NodePtr& head, string an_item, string a_number); 
void show_list(NodePtr& head); 
int main() 
{ 
    NodePtr head = NULL; 
    head_insert(head, "Tea", "08/10/2003"); 
    head_insert(head, "Jam", "09/12/2003"); 
    head_insert(head, "Rolls", "01/01/2010"); 
    show_list(head); 
    return 0; 
} 
void head_insert(NodePtr& head, string an_item, string a_number) 
{ 
    NodePtr temp_ptr; 
    temp_ptr = new Node; 
    temp_ptr-> item = an_item; 
    temp_ptr-> date = a_number; 
    temp_ptr->link = head; 
    head = temp_ptr; 
} 
void show_list(NodePtr& head) 
{ 
    NodePtr here = head; 
    while (here != NULL) 
    { 
  cout << here-> item << "\t"; 
  cout << here-> date << endl; 
        here = here->link; 
    } 
} 

/*
Rolls   01/01/2010
Jam     09/12/2003
Tea     08/10/2003
*/