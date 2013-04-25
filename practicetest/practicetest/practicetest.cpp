// practicetest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std; 

struct Node 
{ 
    int count; 
    Node *link; 
}; 

typedef Node* NodePtr; 
void head_insert(NodePtr& head, int a_number); 
void show_list(NodePtr& head); 
NodePtr search(NodePtr& head, int target);
void insert(NodePtr& after_me, int a_number);
void remove(NodePtr& before, NodePtr& discard);

int main() 
{ 
    NodePtr head = NULL; 
	head_insert(head,48);
	head_insert(head,5);
	head_insert(head,16);
	head_insert(head,2);
	show_list(head);
    return 0; 
} 
void head_insert(NodePtr& head, int a_number) 
{ 
    NodePtr temp_ptr; 
    temp_ptr = new Node; 
    temp_ptr-> count = a_number; 
    temp_ptr->link = head; 
    head = temp_ptr; 
} 
void show_list(NodePtr& head) 
{ 
    NodePtr here = head; 
    while (here != NULL) 
    { 
		cout << here-> count << endl; 
        here = here->link; 
    } 
}

NodePtr search(NodePtr& head, int target) 
{ 

    //search function definition goes here

}

void insert(NodePtr& after_me, int a_number) 
{ 

    //insert function definition goes here 

} 

void remove(NodePtr& before, NodePtr& discard)
{

    //remove function definition goes here

}
