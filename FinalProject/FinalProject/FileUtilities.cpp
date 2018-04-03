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
	}
	else
	{
		id = 1;
	}
}

void readData(string fileName)
{
	ifstream file(fileName); // declare file stream: 
	string value;
	while (file.good())
	{
		getline(file, value, ','); // read a string until next comma
		cout << value << " ";
	}
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
			list.insertBeg(id, firstName, lastName, phone, email);
		}
		list.displayList();
		cout << endl;
	}
}

void searchCustomer(string firstName)
{
	list.findNode(firstName);
}
