#pragma once
#include "transNode.h"
#include <iostream>
#include <iomanip>
#include <sstream>

class tranList
{
public:
	tranList();
	void makeEmpty();
	void deleteAtPosition(int);
	void add(string, double);
	void displayList();
	void displayListEdit();
	void saveToFile(string);
	~tranList();
private:
	int length;
	transNode* head;
};

tranList::tranList()
{
	length = 0;
	head = NULL;
}
tranList::~tranList()
{
	makeEmpty();
}

void tranList::makeEmpty()
{
	transNode *temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
	length = 0;
}

void tranList::deleteAtPosition(int pos)
{
	if (pos < 0 || pos > length)
	{
		cout << "incorrect Index" << endl;
	}
	else if (pos == 1)
	{
		transNode *temp = head;
		head = head->next;
		delete temp;
		length--;
	}
	else
	{
		transNode *current = head;
		transNode *previous = head;

		for (int i = 1; i < pos; i++)
		{
			previous = current;
			current = current->next;
		}

		previous->next = current->next;
		delete current;
		length--;
	}
}

// main() : while (!file.eof()) read then tranList.add(1,2);
void tranList::add(string name, double pr)
{
	transNode *newNode = new transNode();
	newNode->p_name = name;
	newNode->price = pr;

	if (head == NULL)
	{
		head = newNode;
		length++;
	}
	else
	{
		transNode *temp = head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
		length++;
	}
}
void tranList::displayList()
{
	if (length == 0)
	{
		cout << "Is Empty" << endl;
	}
	else
	{
		transNode *temp = head;
		
		cout << "=== Transaction ===\n";
		
		for (int i = 0; i < length; i++)
		{
			cout << temp->p_name << "\t .. $"
				<< setprecision(2) << fixed << temp->price << endl;
			temp = temp->next;
		}
	}
}
void tranList::displayListEdit()
{
	if (length == 0)
	{
		cout << "Is Empty" << endl;
	}
	else
	{
		transNode *temp = head;

		cout << "=== Transaction (Edit) ===\n";

		for (int i = 0; i < length; i++)
		{
			cout << (i + 1) << '\t' << temp->p_name << "\t .. $"
				<< setprecision(2) << fixed << temp->price << endl;
			temp = temp->next;
		}
	}
}
void tranList::saveToFile(string n)
{
	ofstream file;
	file.open(n + ".txt", fstream::trunc);
	string list = ""; stringstream ss;

	transNode *temp = head;

	for (int i = 0; i < (length - 1); i++)
	{
		file << temp->p_name << '\n' << temp->price << '\n';
		temp = temp->next;
	}

	file << temp->p_name << '\n' << temp->price;

	file.close();
}