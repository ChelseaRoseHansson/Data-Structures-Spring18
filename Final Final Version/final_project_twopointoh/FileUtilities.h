#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream> // stringstream, stringbuf
#include <iomanip>
#include "Utilities.h"
#include "LinkedList.h"
using namespace std;

bool writeDataToFile(int id, string firstName, string lastName, string phone, string email, string fileName);
string getLastLine(ifstream& fileName);
inline bool fileExists(const string& fileName);
void getID(string fileName, int & id);
void readData(string fileName);
void displayData(string fileName);
void searchCustomerByFirstName(string firstName, string fileName);
void searchCustomerByLastName(string lastName, string fileName);
void searchCustomerByPhone(string phone, string fileName);
void searchCustomerByEmail(string email, string fileName);