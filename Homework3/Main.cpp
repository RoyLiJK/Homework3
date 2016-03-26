#include<iostream>
#include<string>
#include"Address.h"
#include"Contact.h"
using namespace std;



int main()
{
	
	//Create a partially filled array of Contacts with capacity equal to 10.
	Contact Array[10];

	//Ask the user to input up to 10 Contacts(It may be less.The user should have the
	//ability to stop inputting Contacts whenever he wishes)
	
	for (int i = 0; i < 10; i++)
	{
		Array[i].input();
		if (Array[i].input("-1"));
		break;
	}
	


	/*Create a Menu in your main program with 3 options: search, display all, and exit.
		a) Provide a function in your main program that will be able to search for a particular
		Contact in your array of Contacts.Search must be based on the name.The function
		would return the index.You can call this function in your main program if the user
		selects option ¡°search¡± from the menu to output information about this Contact in your
		main program.
		b) Provide a function in your main program that will allow you to print ALL Contacts in
		the array.Call this function if the user selects ¡°display all¡± option from the menu.
		c) Exit the program if the user selects ¡°exit¡± option from the menu.*/

	int search();
	{
		string name;
		cin >> name;
		for (int i = 0; i < 10; i++) {
			string fullName = Array[i].getfirstname() + ' ' + Array[i].getlastname();

			if (name.compare(Array[i].getfirstname()) == 0) return i;
			else if (name.compare(Array[i].getlastname()) == 0) return i;
			else if (name.compare(fullName) == 0) return i;
		}

		return -1;
	}

	void displayAll();
	{
		for (int i = 0; i < 10; i++)
		{
			Array[i].output();
		}
	}


	int menu = 1;

	while (menu > 0 && menu < 3)
	{
		cout << "Please make a selection from the menu below by entering the number next to your choice to proceed.\n\n";

		//menu
		cout << "1. Search" << endl
			<< "2. Display All" << endl
			<< "3. Exit" << endl;

		cin >> menu;
		
		if (menu == 1)
		{
			search();
			continue;
		}
		
		else if (menu == 2)
		{
			displayAll();
			cout << endl;
			continue;
		}
		
		else if (menu == 3)
		{
			break;
		}

	}


	return 0;
}
