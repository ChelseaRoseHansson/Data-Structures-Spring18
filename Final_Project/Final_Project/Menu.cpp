#include <iostream>
#include "Utilities.h"
#include "Menu.h"
#include "FileUtilities.h"
#include "binarySearchTree.h"
#include <string>
#include <cctype>
#include <sstream>
#include <regex>
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
	string firstName, lastName, phone, email;
	char selection;
	regex PHONE = regex("[[:digit:]]{3}-[[:digit:]]{3}-[[:digit:]]{4}");
	regex EMAIL = regex("[[:alnum:]]+@[[:alpha:]]+\\.[[:alpha:]]+");

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
		cout << " 3. Search Customers By First Name\n";
		gotoxy(50, 14);
		cout << " 4. Search Customers By Last Name\n";
		gotoxy(50, 15);
		cout << " 5. Search Customers By Phone Number\n";
		gotoxy(50, 16);
		cout << " 6. Search Customers By Email\n";
		gotoxy(50, 17);
		cout << " x|X. Exit\n";
		gotoxy(50, 18);
		cout << " ====================================\n";
		gotoxy(50, 19);
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
			cout << "Please enter First Name: ";
			cin >> firstName;
			gotoxy(50, 12);
			cout << "Please enter Last Name: ";
			cin >> lastName;
			gotoxy(50, 13);
			cout << "Please enter phone number: ";
			cin >> phone;

			while (!regex_match(phone, PHONE))
			{
				system("CLS");
				gotoxy(50, 13);
				cout << "Wrong Format (000-000-0000)" << endl;
				gotoxy(50, 14);
				cout << "Please enter phone number: ";
				cin >> phone;
			}

			gotoxy(50, 15);
			cout << "Please enter email: ";
			cin >> email;

			while (!regex_match(email, EMAIL))
			{
				system("CLS");
				gotoxy(50, 15);
				cout << "Wrong Format (xxx@xxxx.com)" << endl;
				gotoxy(50, 16);
				cout << "Please enter email: ";
				cin >> email;
			}

			getID(fileName, id);

			bool result = writeDataToFile(id, firstName, lastName, phone, email, fileName);

			if (result == true)
			{
				gotoxy(50, 17);
				cout << "Registrated successfully." << endl;
			}
			else
			{
				gotoxy(50, 17);
				cout << "Unable to register" << endl;
			}
			gotoxy(50, 18);
			system("pause");
		}
		break;

		case '2':
			system("CLS");
			displayData(fileName);
			gotoxy(51, 17);
			system("pause");
			break;

		case '3':
			gotoxy(51, 20);
			cout << "Enter first name to search: ", cin >> firstName;
			system("CLS");
			searchCustomerByFirstName(firstName, fileName);
			system("pause");
			break;

		case '4':
			gotoxy(51, 20);
			cout << "Enter last name to search: ", cin >> lastName;
			system("CLS");
			searchCustomerByLastName(lastName, fileName);
			system("pause");
			break;

		case '5':
			gotoxy(51, 20);
			cout << "Enter phone number to search: ", cin >> phone;

			while (!regex_match(phone, PHONE))
			{
				system("CLS");
				gotoxy(50, 13);
				cout << "Wrong Format (000-000-0000)" << endl;
				gotoxy(50, 14);
				cout << "Please enter phone number: ", cin >> phone;
			}

			system("CLS");
			searchCustomerByPhone(phone, fileName);
			system("pause");
			break;

		case '6':
			gotoxy(51, 20);
			cout << "Enter email to search: ", cin >> email;

			while (!regex_match(email, EMAIL))
			{
				system("CLS");
				gotoxy(50, 15);
				cout << "Wrong Format (xxx@xxxx.com)" << endl;
				gotoxy(50, 16);
				cout << "Please enter email: ", cin >> email;
			}

			system("CLS");
			searchCustomerByEmail(email, fileName);
			system("pause");
			break;

		case 'X':
		case 'x':
			gotoxy(51, 20);
			cout << "Goodbye.\n";
			gotoxy(51, 21);
			system("pause");
			return;

		default:
			gotoxy(51, 20);
			cout << selection << " is not a valid menu item.\n";
			cout << endl;
			gotoxy(51, 21);
			system("pause");
			break;
		}

	} while (selection != 'x' || selection != 'X');


}

void inventoryMenu() {
	system("Color 1A");
	system("CLS");

	char selection; 

	gotoxy(50, 9);
	cout << " Inventory Menu\n";
	gotoxy(50, 10);
	cout << " ====================================\n";
	gotoxy(50, 11);
	cout << " 1. Add Item\n";
	gotoxy(50, 12);
	cout << " 2. Display All Items\n";
	gotoxy(50, 13);
	cout << " 3. Search for an Item by Product ID\n";
	gotoxy(50, 14);
	cout << " x|X. Exit\n";
	gotoxy(50, 15);
	cout << " ====================================\n";
	gotoxy(50, 16);
	cout << " Enter your selection: ";
	cin >> selection;
	cout << endl;

	binarySearchTree bst;
	bst.populateTree("groceries.txt");

	switch (selection) {
	case '1':
	{
		system("CLS");
		product newProduct;
		string names;

		gotoxy(50, 9);
		cout << "Input Data\n";
		gotoxy(50, 10);
		cout << "==========\n";
		gotoxy(50, 11);
		cout << "Please enter Product ID: ";
		cin >> newProduct.productID;
		gotoxy(50, 12);
		cout << "Please enter Product Name without whitespace: ";
		cin >> newProduct.name;
		gotoxy(50, 13);
		cout << "Please enter price of product, including decimal: ";
		cin >> newProduct.price;
		bst.insert(newProduct);
		cout << "The inventory, with your new item: " << endl;
		bst.display();
	}
	case '2':{
		system("CLS");
		bst.display();
		gotoxy(51, 17);
		system("pause");
		break;
	
	}
	case '3': {
		int productNum;
		gotoxy(51, 20);
		cout << "Enter product ID to search: ", cin >> productNum;
		system("CLS");
		gotoxy(51, 20);
		cout << "Your Item: " << endl;
		bst.search(productNum);
		system("pause");
		break;
	}
	case 'X':
	case 'x':
		gotoxy(51, 20);
		cout << "Goodbye.\n";
		gotoxy(51, 21);
		system("pause");
		return;

	default:
		gotoxy(51, 20);
		cout << selection << " is not a valid menu item.\n";
		cout << endl;
		gotoxy(51, 21);
		system("pause");
		break;



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
		cout << " 2. Inventory List\n";
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
			inventoryMenu();
			break;
		case '3':
			androidProgramming();
			break;

		case 'X':
		case 'x':
			gotoxy(51, 19);
			cout << "Goodbye.\n";
			gotoxy(51, 20);
			system("pause");
			return;

		default:
			gotoxy(51, 19);
			cout << selection << " is not a valid menu item.\n";
			cout << endl;
			gotoxy(51, 20);
			system("pause");
		}

	} while (selection != 'x' || selection != 'X');

}