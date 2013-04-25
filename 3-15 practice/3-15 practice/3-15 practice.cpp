// 3-15 practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstddef>
#include <string>
using namespace std;
 
struct Code
{
        string store_name;
        int store_num;
};
 
struct Node
{
    string item;
    Code code;
    Node *link;
};
 
typedef Node* NodePtr;
NodePtr search_item(NodePtr head, string an_item);
NodePtr search_store(NodePtr head, Code c);
void head_insert(NodePtr& head, string an_item, Code c);
void show_list(NodePtr& head);
void remove(NodePtr& before, NodePtr& discard)


int main()
{
    NodePtr head = NULL;
	Code c1, c2, c3;
	c1.store_name = "Star";
	c1.store_num = 56;
	c2.store_name = "SnS";
	c2.store_num = 44;
	c3.store_name = "BJs";
	c3.store_num = 1;
	head_insert(head,"Tea",c1);
	head_insert(head,"Jam",c2);
	head_insert(head,"Rolls",c3);
	show_list(head);

	string t = "Jam";
	if(search_item(head,t) != NULL)
		cout << t << " is on the list\n";
	else
		cout << t << " is not on the list\n";

	Code c4;
	c4.store_name = "BJs";
	c4.store_num = 1;
	if(search_store(head, c4) != NULL)
		cout << c4.store_name << " and " << c4.store_num << " is on the list\n";
	else
		cout << c4.store_name << " and " << c4.store_num << " is not on the list\n";

	Node n1;
	n1.item = "Pizza";
	n1.code.store_name = "Pizza Hut";
	n1.code.store_num = 16;

	show_list(head);
	NodePtr after_me = search_item(head, "Jam");
	insert(after_me,n1);
	show_list(head);

	NodePtr before = search_item(head, "Tea");
	NodePtr discard = search_item(head, "Jam");
	remove(before, discard);

	return 0;
}
void remove(NodePtr& before, NodePtr& discard)
{

}
void head_insert(NodePtr& head, string an_item, Code c)
{
    NodePtr temp_ptr;
    temp_ptr = new Node;
    temp_ptr-> item = an_item;
    temp_ptr -> code.store_name = c.store_name;
        temp_ptr -> code.store_num = c.store_num;
    temp_ptr -> link = head;
    head = temp_ptr;
}
void show_list(NodePtr& head)
{
    NodePtr here = head;
    while (here != NULL)
    {
        cout << here-> item << "\t";
        cout << here->code.store_name << "\t" << here-> code.store_num << endl;
        here = here->link;
    }
}
 
NodePtr search_item(NodePtr head, string target)
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
NodePtr search_store(NodePtr head, Code c)
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
        while (here-> code.store_name != c.store_name && here-> code.store_num != c.store_num && here-> link != NULL)
            here = here->link;
        // Found the target, return the pointer at that location
		if (here-> code.store_name == c.store_name && here -> code.store_num == c.store_num)
            return here;
        // Search unsuccessful, return Null
        else
            return NULL;
    }
}
void insert(NodePtr after_me, Node n)
{
	NodePtr temp_ptr;
	temp_ptr = new Node;

	temp_ptr.string = n.string;
	temp_ptr->code.store_name = n.code.store_name;
	temp_ptr->code.store_num = n.code.store_num;

	temp_ptr->link = after_me ->link;
	after_me->link = temp_ptr;
}