#include "stdafx.h"
#include "stack.h"
#include <iostream>


using namespace std;

void first(int val, node **top)
{
	node *tmp = new node;
	(*tmp).val = val;   //tmp->val = val;
	(*tmp).next = nullptr;
	*top = tmp;
}


// добавление элемента в стэк

void push(int val, node **top) 
{
	node *tmp = new node;
	(*tmp).val = val;   //tmp->val = val;	
	(*tmp).next = *top;
	*top = tmp;
}


int pop(node **top)
{
	int val = (**top).val;
	node *tmp_node = (*top);

	*top = (**top).next;

	delete tmp_node;

	return val;
}



void print(node *top)
{

	//if (top == NULL) // !top
	//{
	//	return;
	//}


	// node *m = top;


	//while (m != nullptr)
	//{
		//cout << m->val;
		//m = m->next;
	//}

	while (top != NULL)
	{
	    cout << top->val << endl;
	    top = top->next;
	}
} 



void printDel(node *top)
{
	while (top != NULL)
	{
		cout << pop(&top) << endl;
		//top = top->next;		error
	}

	if (top != NULL)
	{
		cout << "Stack deleted" << endl;
	}	
}

