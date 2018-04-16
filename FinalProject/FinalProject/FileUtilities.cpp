#include "FileUtilities.h"

LinkedList list;

bool writeDataToFile(int id, string firstName, string lastName, string phone, string email, string fileName)
{
	bool result = false;
	fstream fs;
	//Creating and openning file to write using fstream::out
	fs.open(fileName, fstream::app);
	if (fs.is_open())
	{
		fs << id << "," << firstName << "," << lastName << "," << phone << "," << email << endl;
		fs.close();
		result = true;
	}
	else
	{
		cout << "Unable to open file" << endl;
		result = false;
	}
	fs.close();
	return result;
}

string getLastLine(ifstream & fileName)
{
	string line, lastLine;

	if (fileName.is_open())
	{
		while (getline(fileName, line))
		{
			lastLine = line;
		}
		fileName.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}

	return lastLine;
}

inline bool fileExists(const string& fileName)
{
	ifstream f(fileName);
	return f.good();
}

void getID(string fileName, int & id)
{
	if (fileExists(fileName))
	{
		ifstream file(fileName);

		stringstream ss;

		if (file)
		{
			string line = getLastLine(file);
			ss.str(line);
			ss >> id;
			id++;
		}
		else
		{
			cout << "Unable to open file.\n";
		}
		file.close();
	}
	else
	{
		id = 1;
	}
}

void readData(string fileName)
{
	ifstream file(fileName); // declare file stream: 
	int id;
	string temp, firstName, lastName, phone, email;

	list.makeEmpty();

	while (file)
	{
		string line;
		if (!getline(file, line)) break;

		stringstream ss(line);
		if (ss.good())
		{
			getline(ss, temp, ','); // read a string until next comma
			id = stoi(temp);

			getline(ss, firstName, ',');

			getline(ss, lastName, ',');

			getline(ss, phone, ',');

			getline(ss, email, ',');

			list.insertEnd(id, firstName, lastName, phone, email);
		}
	}
	file.close();
}

void displayData(string fileName)
{
	ifstream inputFile(fileName);
	string line;

	int id;
	string firstName;
	string lastName;
	string phone;
	string email;

	list.makeEmpty();

	while (inputFile) {
		string line;
		if (!getline(inputFile, line)) break;

		stringstream ss(line);
		if (ss.good())
		{
			string substr;
			getline(ss, substr, ',');
			id = stoi(substr);

			getline(ss, substr, ',');
			firstName = substr;

			getline(ss, substr, ',');
			lastName = substr;

			getline(ss, substr, ',');
			phone = substr;

			getline(ss, substr, ',');
			email = substr;
			list.insertEnd(id, firstName, lastName, phone, email);
		}
		cout << endl;
	}
	list.displayList();
	inputFile.close();
}

void searchCustomerByFirstName(string firstName, string fileName)
{
	if (list.isEmpty())
	{
		readData(fileName);
	}

	if (list.findNodeByFirstName(firstName))
	{

	}
	else
	{
		gotoxy(51, 18);
		cout << "No existing customer" << endl;
	}
}

void searchCustomerByLastName(string lastName, string fileName)
{
	if (list.isEmpty())
	{
		readData(fileName);
	}

	if (list.findNodeByLastName(lastName))
	{

	}
	else
	{
		gotoxy(51, 18);
		cout << "No existing customer" << endl;
	}
}

void searchCustomerByPhone(string phone, string fileName)
{
	if (list.isEmpty())
	{
		readData(fileName);
	}

	if (list.findNodeByPhone(phone))
	{

	}
	else
	{
		gotoxy(51, 18);
		cout << "No existing customer" << endl;
	}
}

void searchCustomerByEmail(string email, string fileName)
{
	if (list.isEmpty())
	{
		readData(fileName);
	}

	if (list.findNodeByEmail(email))
	{

	}
	else
	{
		gotoxy(51, 18);
		cout << "No existing customer" << endl;
	}
}