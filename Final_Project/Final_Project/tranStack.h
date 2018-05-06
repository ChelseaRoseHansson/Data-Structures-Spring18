#pragma once
#include "transNode.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

class tranStack
{
public:
	tranStack();
	void abortTran(); // Make Empty
	void undo();
	void push(string, double);
	void printStack();
	bool saveTran(string);
	bool isEmpty() const;
	~tranStack(); // Destructor
private:
	int length;
	transNode* head;
};

tranStack::tranStack()
{
	length = 0;
	head = NULL;
}
tranStack::~tranStack()
{ 
	abortTran();
}

void tranStack::abortTran()
{
	transNode*  temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		delete  temp;
	}
	length = 0;
}

void tranStack::undo()
{
	if (isEmpty())
	{
		cout << "Cannot undo.\n";
	}
	else
	{
		transNode* temp = head;
		head = head->next;
		delete  temp;
		length--;
	}
}
void tranStack::push(string name, double pr)
{
	transNode* newNode = new transNode;
	newNode->p_name = name;
	newNode->price = pr;
	newNode->next = head;
	head = newNode;
	length++;
}

void tranStack::printStack()
{
	if (isEmpty())
	{
		cout << "Awaiting new product.\n";
	}
	else
	{
		string tempS, stack = "=================\n";
		transNode* temp = head;
		stringstream ss;
		ss << setprecision(2);

		while (temp != NULL)
		{
			ss << setprecision(2) << fixed << temp->price;
			tempS = temp->p_name + "\t .. $" + ss.str() + '\n';
			ss.str(string());
			stack.insert(0, tempS);
			temp = temp->next;
		}
		stack.insert(0, "=== New Items ===\n");
		cout << stack;
	}
}
bool tranStack::saveTran(string name)
{
	ofstream file;
	file.open(name + ".txt", ofstream::app);
	
	if (file.is_open() && !this->isEmpty())
	{
		string tempS, stack;
		transNode* temp = head;
		stringstream ss;
		ss << setprecision(2);

		while (temp != NULL)
		{
			ss << setprecision(2) << fixed << temp->price;
			tempS = temp->p_name + '\n' + ss.str() + '\n';
			ss.str(string());
			stack.insert(0, tempS);
			temp = temp->next;
		}

		stack.pop_back();
		file << stack;
		return true;
	}
	else
		return false;

	file.close();
}

bool tranStack::isEmpty() const
{
	return  (head == NULL);
}