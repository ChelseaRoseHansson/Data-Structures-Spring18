#pragma once
#include <string>
using namespace std;

struct transNode
{
	string p_name;
	double price;

	transNode *next;
};