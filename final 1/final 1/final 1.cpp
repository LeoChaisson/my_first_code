// final 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std; 

struct Node 
{ 
    double count; 
    Node *link; 
}; 

typedef Node* NodePtr; 
void head_insert(NodePtr& head, double a_number); 
void show_list(NodePtr& head); 
NodePtr search(NodePtr& head, double target);
void insert(NodePtr& after_me, double a_number);
void remove(NodePtr& before, NodePtr& discard);
double findMin(NodePtr& head);

int main() 
{ 
    NodePtr head = NULL; 
	head_insert(head, 4.8);
	head_insert(head, 5.5);
	head_insert(head, 6.6);
	head_insert(head, 4.5);
	cout << "The original linked list has:\n";
	show_list(head);
	NodePtr after_me = search(head, 6.6);
	insert(after_me, 2.2);
	cout << "\nAfter inserting node 2.2:\n";
	show_list(head);
	NodePtr before = search(head, 2.2);
	NodePtr discard = search(head, 5.5);
	remove(before, discard);
	cout << "\nAfter removing node 5.5:\n"; 
	show_list(head);
	findMin(head);
    return 0; 
} 
void head_insert(NodePtr& head, double a_number) 
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

NodePtr search(NodePtr& head, double target) 
{  
    NodePtr here = head; 
    if (here == NULL) 
    { 
        return NULL; 
    } 
    else 
    { 
        while (here-> count != target && here->link != NULL) 
            here = here->link; 
        if (here->count == target) 
            return here; 
        else 
            return NULL; 
    } 

}

void insert(NodePtr& after_me, double a_number) 
{ 
    NodePtr temp_ptr; 
    temp_ptr = new Node; 
    temp_ptr -> count = a_number; 
    temp_ptr ->link = after_me -> link; 
    after_me ->link = temp_ptr; 
} 

void remove(NodePtr& before, NodePtr& discard)
{
	before -> link = discard -> link;
	delete discard;
	discard = NULL;
}


double findMin(NodePtr& head)
{
	NodePtr pWalker;
	double min;
	min=head->count;
	return min;
}