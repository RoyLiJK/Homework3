#include <iostream>
#include <string>
#include<regex>
#include"Contact.h"




	// Constructor with parameters
	Contact::Contact(string U_lastname, string U_firstname, string U_phone, string U_email )
	{
		lastname = U_lastname;
		firstname = U_firstname;
		
		phone = U_phone;
		email = U_email;
	}

	// Default constructor
	Contact::Contact()
	{
		lastname = "unknown";
		firstname = "unknown";
		
		phone = "unknown";
		email = "unknown";
	}

	// Accessor functions
	string Contact::getlastname() { return lastname; }
	string Contact::getfirstname() { return firstname; }
	
	string Contact::getphone() { return phone; }
	string Contact::getemail() { return email; }
	
	// Mutator functions
	void Contact::setlastname(string U_lastname) { lastname = U_lastname; }
	void Contact::setfirstname(string U_firstname) { firstname = U_firstname; }
	
	void Contact::setphone(string U_phone) { phone = U_phone; }
	void Contact::setemail(string U_email) { email = U_email; }
	
	// Input and output function
	void input();
	void output();
	

	void Contact::input()
	{
		cout << "Please enter your last name: " << endl;
		cin >> lastname;
		cout << "Please enter your first name: " << endl;
		cin >> firstname;
		cin.ignore();
		
		cout << "Please enter your phone# (digit only): " << endl; 
		cin >> phone;

		cout << "Please enter your email: " << endl;   
		while (cin >> email)
			{
				if (regex_match(email, regex("[a-zA-Z]+\\w*@[a-zA-Z]+\\w*\\.(net|org|com)")))
					break;
			else
				cout << "please enter correct format of email address: " << endl;
				cin >> email;
			}
	}

	void Contact::output()
	{
		cout << "Your lastname is: " << lastname << endl;
		cout << "Your firstname is: " << firstname << endl;
		
		cout << "Your phone# is: " << phone << endl;
		cout << "Your email is: " << email << endl;
	}

