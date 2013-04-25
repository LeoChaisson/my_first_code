// hw7.cpp : Defines the entry point for the console application.
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
NodePtr search1(NodePtr head, string an_item);
NodePtr search2(NodePtr head, string a_number);
void head_insert(NodePtr& head, string an_item, string a_number); 
void show_list(NodePtr& head); 
int main() 
{ 
    NodePtr head = NULL; 
    head_insert(head, "Tea", "01/01/2010"); 
    head_insert(head, "Jam", "09/12/2003"); 
    head_insert(head, "Rolls", "08/10/2003"); 
	cout << "List contains:" << endl; 
    show_list(head); 
    string target;
	while(target != "stop")
	{
		cout << "Enter an item to search for (or stop to exit)" << endl; 
		cin >> target; 
		if (search1(head, target)||search2(head, target)) 
		cout << target << " is on the list." << endl; 
		else 
		cout << target << " is not on the list." << endl;  
	} 
    return 0; 
} 
NodePtr search1(NodePtr head, string target) 
{ 
   // Point to the head node 
    NodePtr here = head; 
    // If the list is empty nothing to search 
    if (here == NULL) 
    { 
        return NULL; 
    } 
    // Search for the item 
    else 
    { 
        //while you have still items and you haven't found the target yet 
        while (here-> item != target && here->link != NULL) 
            here = here->link; 
        // Found the target, return the pointer at that location 
        if (here-> item == target) 
            return here; 
        // Search unsuccessful, return Null 
        else 
            return NULL; 
    } 
} 
NodePtr search2(NodePtr head, string target) 
{ 
   // Point to the head node 
    NodePtr here = head; 
    // If the list is empty nothing to search 
    if (here == NULL) 
    { 
        return NULL; 
    } 
    // Search for the item 
    else 
    { 
        //while you have still items and you haven't found the target yet 
        while (here-> item != target && here->link != NULL) 
            here = here->link; 
        // Found the target, return the pointer at that location 
        if (here-> item == target) 
            return here; 
        // Search unsuccessful, return Null 
        else 
            return NULL; 
    } 
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
List contains:
Rolls   08/10/2003
Jam     09/12/2003
Tea     01/01/2010
Enter an item to search for (or stop to exit)
Rolls
Rolls is on the list.
Enter an item to search for (or stop to exit)
jam
jam is not on the list.
Enter an item to search for (or stop to exit)
01/01/2010
01/01/2010 is not on the list.
Enter an item to search for (or stop to exit)
stop
stop is not on the list.
*/