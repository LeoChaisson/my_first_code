// linked nodes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstddef>
using namespace std;

struct node
{
	int data;
	char num;
	node *link;
};
typedef node* nodePtr;
void head_insert(nodePtr& head,int n,char m);
nodePtr search(nodePtr, int target); //search function declaration
nodePtr remove(nodePtr before, nodePtr discard);

int _tmain(int argc, _TCHAR* argv[])
{
	nodePtr head;
	nodePtr after_me;
	nodePtr before, discard;

	head=new node;
	head->data=22;
	head->num='e';
	head->link=NULL;
	head_insert(head,9,'d');
	head_insert(head,18,'c');
	head_insert(head,16,'b');
	head_insert(head,25,'a');
	after_me=search(head,18);
	head_insert(after_me,17,'e');

	nodePtr iter;
	for (iter = head; iter != NULL; iter = iter->link)
		cout << (iter->data)<< " " << endl;
	return 0;
}

void head_insert(nodePtr& head,int n,char m)
{
	nodePtr tempPtr;
	tempPtr = new node;
	tempPtr->data=n;
	tempPtr->num=m;
	tempPtr->link=head;
	head=tempPtr;
}
//search function
nodePtr search(nodePtr head, int target)
{
	nodePtr here = head;
	while(here->data != target && here->link != NULL)
	{
		here=here->link;
	}
	if (here->data == target)
		return here;
	else
		return NULL;
}
nodePtr remove(nodePtr before, nodePtr discard)
{
	before->link=discard->link;
	delete discard;
	return 0;
}