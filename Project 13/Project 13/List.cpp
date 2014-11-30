// Franklin Colton Parry
// Course: CS 1410 Section 001
// Instructor: Professor deBry
// Contents: Project 13
// Date: 8/11/13


// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------


#include "List.h"


List::List(void)
{
	first = NULL;
	last = NULL;
	counter = 0;
}

void List::push_front(Node * f)
{
	if(first != NULL)
	{
		f->setNextNode(first);
		first = f;
		counter++;
	}
	else
	{

		f->setNextNode(first);
		first = f;
		last = f;
		counter++;
		
	}

}

void List::push_back(Node* b)
{
		
	if(first != NULL)
	{
		
		Node* tempNode = last; 
		tempNode->setNextNode(b);
		last = b;
		counter++;
	}
	else
	{
		Node* tempNode = last; 
		tempNode->setNextNode(b);
		last = b;
		first = b;
		counter++;
		
	}

}

Node * List::pop_back()
{
	Node * removedNode = last;
	last = last->getNextNode();
	
	counter--;
	return removedNode;
}


Node * List::pop_front()
{
	Node * removedNode = first;
	first = first->getNextNode();
	
	counter--;
	return removedNode;
}

Node * List::getFirst() const
{
	return first;
}

Node * List::getLast() const
{
	return last;
}

int List::getCounter() const
{
	return counter;
}

List::~List(void)
{
	Node* p = first;
   while ( p!=NULL)
   {
      Node* pnext = p->getNextNode();
	  delete p;
      p = pnext;
   }

}
