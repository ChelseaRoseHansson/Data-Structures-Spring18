#include "LinkedList.h"



LinkedList::LinkedList()
{
	head = NULL;
	length = 0;
}


LinkedList::~LinkedList()
{
	makeEmpty();
}

bool LinkedList::isEmpty() const
{
	return length == 0;
}

bool LinkedList::isFull() const
{
	Node *location;
	
	try 
	{
		location = new Node();
		delete location;
		return false;
	}
	catch (bad_alloc exception)
	{
		return true;
	}
}

void LinkedList::makeEmpty()
{
	Node *temp;
	
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		delete temp;
	}

	length = 0;
}

void LinkedList::insertBeg(int id, string firstName, string lastName, string phone, string email)
{
	Node *newNode = new Node();
	newNode->id = id;
	newNode->firstName = firstName;
	newNode->lastName = lastName;
	newNode->phone = phone;
	newNode->email = email;
	newNode->next = head;
	head = newNode;
	length++;
}

void LinkedList::insertEnd(int id, string firstName, string lastName, string phone, string email)
{
	Node *newNode = new Node();
	newNode->id = id;
	newNode->firstName = firstName;
	newNode->lastName = lastName;
	newNode->phone = phone;
	newNode->email = email;
	newNode->next = NULL;

	if (head == NULL)
	{
		head = newNode;
		length++;
	}
	else
	{
		Node *temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newNode;
		length++;
	}
}

void LinkedList::insertNode(int pos, int id, string firstName, string lastName, string phone, string email)
{
	if (pos < 0 || (pos > length && head != NULL))
	{
		cout << "Wrong Position" << endl;
	}
	else
	{
		Node *temp = head;
		Node *newNode = new Node();
		newNode->id = id;
		newNode->firstName = firstName;
		newNode->lastName = lastName;
		newNode->phone = phone;
		newNode->email = email;
		newNode->next = NULL;

		if (pos == 1)
		{
			head = newNode;
			length++;
		}
		else
		{
			Node *current = head;
			Node *previous = head;
			for (int i = 1; i < pos; i++)
			{
				previous = current;
				current = current->next;
			}

			previous->next = newNode;
			newNode->next = current;
			length++;
		}
	}
}

bool LinkedList::findNodeByFirstName(string firstName)
{
	Node *temp = head;
	bool found = false;
	int i = 0, row = 11;

	gotoxy(51, 9);
	cout << " Searched by First Name\n";
	gotoxy(51, 10);
	cout << " ====================================\n";

	for (int i = 1; i <= length; i++)
	{
		if (temp->firstName == firstName)
		{
			gotoxy(51, row);
			cout << " ID: " << temp->id << endl;
			gotoxy(51, row + 1);
			cout << " First Name: " << temp->firstName << endl;
			gotoxy(51, row + 2);
			cout << " Last Name: " << temp->lastName << endl;
			gotoxy(51, row + 3);
			cout << " Phone: " << temp->phone << endl;
			gotoxy(51, row + 4);
			cout << " Email: " << temp->email << endl;
			gotoxy(51, row + 5);
			cout << " ====================================\n";
			row += 6;
			temp = temp->next;
			found = true;
		}
		else
		{
			temp = temp->next;
		}
	}

	return found;
}

bool LinkedList::findNodeByLastName(string lastName)
{
	Node *temp = head;
	bool found = false;
	int i = 0, row = 11;

	gotoxy(51, 9);
	cout << " Searched by First Name\n";
	gotoxy(51, 10);
	cout << " ====================================\n";

	for (int i = 1; i <= length; i++)
	{
		if (temp->lastName == lastName)
		{
			gotoxy(51, row);
			cout << " ID: " << temp->id << endl;
			gotoxy(51, row + 1);
			cout << " First Name: " << temp->firstName << endl;
			gotoxy(51, row + 2);
			cout << " Last Name: " << temp->lastName << endl;
			gotoxy(51, row + 3);
			cout << " Phone: " << temp->phone << endl;
			gotoxy(51, row + 4);
			cout << " Email: " << temp->email << endl;
			gotoxy(51, row + 5);
			cout << " ====================================\n";
			row += 6;
			temp = temp->next;
			found = true;
		}
		else
		{
			temp = temp->next;
		}
	}

	return found;
}

bool LinkedList::findNodeByPhone(string phone)
{
	Node *temp = head;
	bool found = false;
	int i = 0, row = 11;

	gotoxy(51, 9);
	cout << " Searched by First Name\n";
	gotoxy(51, 10);
	cout << " ====================================\n";

	for (int i = 1; i <= length; i++)
	{
		if (temp->phone == phone)
		{
			gotoxy(51, row);
			cout << " ID: " << temp->id << endl;
			gotoxy(51, row + 1);
			cout << " First Name: " << temp->firstName << endl;
			gotoxy(51, row + 2);
			cout << " Last Name: " << temp->lastName << endl;
			gotoxy(51, row + 3);
			cout << " Phone: " << temp->phone << endl;
			gotoxy(51, row + 4);
			cout << " Email: " << temp->email << endl;
			gotoxy(51, row + 5);
			cout << " ====================================\n";
			row += 6;
			temp = temp->next;
			found = true;
		}
		else
		{
			temp = temp->next;
		}
	}

	return found;
}

bool LinkedList::findNodeByEmail(string email)
{
	Node *temp = head;
	bool found = false;
	int i = 0, row = 11;

	gotoxy(51, 9);
	cout << " Searched by First Name\n";
	gotoxy(51, 10);
	cout << " ====================================\n";

	for (int i = 1; i <= length; i++)
	{
		if (temp->email == email)
		{
			gotoxy(51, row);
			cout << " ID: " << temp->id << endl;
			gotoxy(51, row + 1);
			cout << " First Name: " << temp->firstName << endl;
			gotoxy(51, row + 2);
			cout << " Last Name: " << temp->lastName << endl;
			gotoxy(51, row + 3);
			cout << " Phone: " << temp->phone << endl;
			gotoxy(51, row + 4);
			cout << " Email: " << temp->email << endl;
			gotoxy(51, row + 5);
			cout << " ====================================\n";
			row += 6;
			temp = temp->next;
			found = true;
		}
		else
		{
			temp = temp->next;
		}
	}

	return found;
}

void LinkedList::deleteNode(string firstName, string lastName, string phone, string email)
{
	if (head == NULL)
	{
		cout << "Is Empty" << endl;
	}
	else
	{
		Node *current = head;
		Node *previous = head;

		while (current->next != NULL)
		{
			previous = current;
			current = current->next;

			if (current->firstName == firstName && current->lastName == lastName && current->phone == phone && current->email == email)
			{
				Node *temp = current;
				previous = current->next;
				delete temp;
				length--;
				break;
			}
		}
	}
}

void LinkedList::deleteAtPosition(int pos)
{
	if (pos < 0 || pos > length)
	{
		cout << "Wrong Position" << endl;
	}
	else if (pos == 1)
	{
		Node *temp = head;
		head = head->next;
		delete temp;
		length--;
	}
	else
	{
		Node *current = head;
		Node *previous = head;

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

int LinkedList::getLength() const
{
	return length;
}

void LinkedList::displayList()
{
	if (isEmpty())
	{
		cout << "Is Empty" << endl;
	}
	else
	{
		Node *temp = head;

		int row = 9;
		gotoxy(10, row);
		cout << setw(4) << "ID" << setw(20) << "First Name" << setw(20) << "Last Name" << setw(16) << "Phone" << setw(25) << "Email" << endl;

		for (int i = 0; i < length; i++)
		{
			row++;
			gotoxy(10, row);
			cout << setw(4) << temp->id << setw(20) << temp->firstName << setw(20) << temp->lastName << setw(16) << temp->phone << setw(25) << temp->email;
			temp = temp->next;
		}
	}
}
