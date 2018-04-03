#include <iostream>
#include "Utilities.h"
#include "Menu.h"
#include "FileUtilities.h"
#include <string>
#include <cctype>

using namespace std;



void computerProgrammingInCpp()
{
	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                Computer Programming In C++                  *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");

}


void javaProgramming()
{
	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                      Java Programming                       *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");

}


void androidProgramming()
{
	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                     Android Programming                     *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");

}


void iosProgramming()
{
	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                       IOS Programming                       *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");

}

int validate(string input, string checkType)
{
	int numoccur = 0;

	if (checkType == "isalpha")
	{
		for (unsigned int x = 0; x < input.length(); x++)
		{
			if (!isalpha(input[x]))
				numoccur++;
		}
	}


	if (checkType == "isdigit")
	{
		for (unsigned int x = 0; x < input.length(); x++)
		{
			if (!isdigit(input[x]))
				numoccur++;
		}
	}

	return numoccur;

}

void userInput()
{
	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                       User Input                            *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");
	system("cls");

	string firstName, lastName, studentID;
	int invalidChractersFN = 0, invalidChractersLN = 0, invalidChractersID = 0;;

	int numoccur = 0;

	cout << "Please enter your first name: \n";
	cin >> firstName;
	invalidChractersFN = validate(firstName, "isalpha");

	cout << "Please enter our last name: \n";
	cin >> lastName;
	invalidChractersLN = validate(lastName, "isalpha");

	cout << "Please enter your student ID #: \n";
	cin >> studentID;
	invalidChractersID = validate(studentID, "isdigit");



	if (invalidChractersFN > 0)
	{
		cout << "You have " << invalidChractersFN << " invalid characters in first name" << endl;
	}

	if (invalidChractersLN > 0)
	{
		cout << "You have " << invalidChractersLN << " invalid characters in last name" << endl;
	}

	if (invalidChractersID > 0)
	{
		cout << "You have " << invalidChractersID << " invalid characters in student id" << endl;
	}

	system("PAUSE");

}

void registrationMenu()
{
	string fileName = "customerData.csv";
	string firstName, lastName, phone, email, name;
	char selection;

	do
	{
		system("Color 1A");
		system("CLS");
		gotoxy(50, 9);
		cout << " Registration Menu\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1. Add Customer\n";
		gotoxy(50, 12);
		cout << " 2. Display Customers\n";
		gotoxy(50, 13);
		cout << " 3. Search Customers\n";
		gotoxy(50, 14);
		cout << " 4. Exit\n";
		gotoxy(50, 15);
		cout << " ====================================\n";
		gotoxy(50, 16);
		cout << " Enter your selection: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
		{
			system("CLS");
			int id;

			gotoxy(50, 9);
			cout << "Input Data\n";
			gotoxy(50, 10);
			cout << "==========\n";
			gotoxy(50, 11);
			cout << "Please enter First Name:";
			cin >> firstName;
			gotoxy(50, 12);
			cout << "Please enter Last Name:";
			cin >> lastName;
			gotoxy(50, 13);
			cout << "Please enter phone number:";
			cin >> phone;
			gotoxy(50, 14);
			cout << "Please enter email:";
			cin >> email;

			getID(fileName, id);

			bool result = writeDataToFile(id, firstName, lastName, phone, email, fileName);

			if (result == true)
			{
				gotoxy(50, 15);
				cout << "Registrated successfully." << endl;
			}
			else
			{
				gotoxy(50, 15);
				cout << "Unable to register" << endl;
			}
			system("pause");
		}
		break;

		case '2':
			system("CLS");
			displayData(fileName);
			system("pause");
			break;

		case '3':
			gotoxy(51, 17);
			cout << "Enter first name to search: ", cin >> name;
			searchCustomer(name);
			system("pause");
			return;

		case 'X':
		case 'x':
			gotoxy(51, 17);
			cout << "Goodbye.\n";
			system("pause");
			return;

		default:
			gotoxy(51, 16);
			cout << selection << " is not a valid menu item.\n";
			cout << endl;
			system("pause");
			break;
		}

	} while (selection != 'x' || selection != 'X');


}

void mainMenu()
{


	char selection;

	do
	{
		system("Color 1A");
		system("CLS");
		gotoxy(50, 9);
		cout << " Grocery Store Menu\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1. Registration Menu\n";
		gotoxy(50, 12);
		cout << " 2. Welcome to Java Programming\n";
		gotoxy(50, 13);
		cout << " 3. Welcome to Android Programming\n";
		gotoxy(50, 14);
		cout << " x|X. Exit\n";
		gotoxy(50, 17);
		cout << " ====================================\n";
		gotoxy(50, 18);
		cout << " Enter your selection: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			registrationMenu();
			break;

		case '2':
			javaProgramming();
			break;
		case '3':
			androidProgramming();
			break;

		case '4':
			iosProgramming();
			break;

		case '5':
			userInput();
			break;

		case '6':
			gotoxy(51, 19);
			cout << "Goodbye.\n";
			system("pause");
			return;

		default:
			gotoxy(51, 19);
			cout << selection << " is not a valid menu item.\n";
			cout << endl;
			system("pause");
		}

	} while (selection != 6);


}