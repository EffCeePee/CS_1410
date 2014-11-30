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


#include "Node.h"


Node::Node(void)
{
	description = "Null";
	measure = "Null";
	nextNode = NULL;
	
}


Node::Node(int units, string meas, string desc)
{
	description = desc;
	measure = meas;
	numUnits = units;
	
}

int Node::getQuantityNumber() const
{
	return numUnits;
}

string Node::getDescription () const
{
	return description;
}

string Node::getQuantityName() const
{
	return measure;
}

Node* Node::getNextNode() const
{
	return nextNode;
}

void Node::setQuantityNumber(int units)
{
	numUnits = units;
}

void Node::setDescription(string descript)
{
	description = descript;
}

void Node::setQuantityName(string meas)
{
	measure = meas;
}

void Node::setNextNode(Node * ptr)
{
	nextNode = ptr;
}

Node::~Node(void)
{

}
