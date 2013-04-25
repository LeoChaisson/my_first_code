// lab8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <cstddef> 
#include <string> 
using namespace std; 
struct Node 
{ 
    string item; 
    int count; 
    Node *link; 
}; 
typedef Node* NodePtr; 
void insert(NodePtr after_me, string an_item, int a_number);
void remove(NodePtr before, NodePtr discard);
void head_insert(NodePtr& head, string an_item, int a_number); 
void show_list(NodePtr& head); 
NodePtr search(NodePtr head, string target); 
int main() 
{ 
    string new_item, target; 

    NodePtr head = NULL; 
    head_insert(head, "Tea", 2); 
    head_insert(head, "Jam", 3); 
    head_insert(head, "Rolls", 10); 
    cout << "List contains:" << endl; 
    show_list(head); 
	
	NodePtr before = search(head, "Rolls");
	NodePtr discard = search(head, "Jam");
	remove(before, discard);
	cout << endl;
	cout << "List after removal:\n";
	show_list(head);
    return 0; 
} 
//Uses cstddef: 
void insert(NodePtr after_me, string an_item, int a_number) 
{ 
    NodePtr temp_ptr; 
    temp_ptr = new Node; 
    temp_ptr -> item = an_item; 
    temp_ptr -> count = a_number; 
    temp_ptr ->link = after_me -> link; 
    after_me ->link = temp_ptr; 
}
void remove(NodePtr before, NodePtr discard)
{
	before->link = discard ->link;
	delete discard;
}
//Uses cstddef: 
void head_insert(NodePtr& head, string an_item, int a_number) 
{ 
    NodePtr temp_ptr; 
    temp_ptr = new Node; 
    temp_ptr -> item = an_item; 
    temp_ptr -> count = a_number; 
    temp_ptr -> link = head; 
    head = temp_ptr; 
} 
//Uses iostream and cstddef: 
void show_list(NodePtr& head) 
{ 
    NodePtr here = head; 
    while (here != NULL) 
    { 
          cout << here-> item << "\t"; 
          cout << here-> count << endl; 
          here = here->link; 
    } 
} 
NodePtr search(NodePtr head, string target) 
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
        // while you have still items and you haven't found the target yet 
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
/*List contains:
Rolls   10
Jam     3
Tea     2

List after removal:
Rolls   10
Tea     2
*/