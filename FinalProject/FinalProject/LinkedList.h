#pragma once
#include <iostream>
#include <string>
#include "Utilities.h"
#include "Node.h"
#include <iomanip>
using namespace std;

class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	bool isEmpty() const;
	bool isFull() const;
	void makeEmpty();
	void insertBeg(int id, string firstName, string lastName, string phone, string email);
	void insertEnd(int id, string firstName, string lastName, string phone, string email);
	void insertNode(int pos, int id, string firstName, string lastName, string phone, string email);
	int findNode(string firstName);
	void deleteNode(string firstName, string lastName, string phone, string email);
	void deleteAtPosition(int pos);
	int getLength() const;
	void displayList();

private:
	int length;
	Node *head;
};

