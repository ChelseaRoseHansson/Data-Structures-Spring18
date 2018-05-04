#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Node
{
	int id;
	string firstName;
	string lastName;
	string phone;
	string email;

	Node *next;
};
