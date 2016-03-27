#include<iostream>
#include<string>
#include"Address.h"
#include"Contact.h"
using namespace std;

int search(Contact contacts[10])
{
	string name;

	cout << "Your name to search: " << endl;


	cin >> name;
	for (int i = 0; i < 10; i++) {
		string fullName = contacts[i].getfirstname() + ' ' + contacts[i].getlastname();
		if (name.compare(contacts[i].getfirstname()) == 0) return i;
		else if (name.compare(contacts[i].getlastname()) == 0) return i;
		else if (name.compare(fullName) == 0) return i;
	}

	return -1;
}

void displayAll(Contact contacts[10])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Index = " << i << endl;
		contacts[i].output();
	}
}


int main()
{

	//Create a partially filled array of Contacts with capacity equal to 10.
	Contact contacts[10];

	//Ask the user to input up to 10 Contacts(It may be less.The user should have the
	//ability to stop inputting Contacts whenever he wishes)

	for (int i = 0; i < 10; i++)
	{

		if (!contacts[i].input())
		{
			break;
		}
	}
	// Create a menu 
	int menu = 1;

	while (menu > 0 && menu < 3)
	{
		cout << "Please enter the number your wish to proceed." << endl;

		cout << "1. Search" << endl
			 << "2. Display All" << endl
			 << "3. Exit" << endl;

		cin >> menu;

		if (menu == 1)
		{

			cout << "the index of your info is: " << search(contacts) << endl;
			continue;
		}

		else if (menu == 2)
		{
			displayAll(contacts);
			cout << endl;
			continue;
		}

		else if (menu == 3)
		{
			cout << "Program Terminated!!" << endl;
			break;
		}
		else if (menu < 0 || menu >3)
		{
			cout << "Error!, please choose again!!" << endl;
			cin >> menu;
		}

	}

	return 0;
}