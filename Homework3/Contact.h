#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>
using namespace std; 

class Contact
{
private:
	string lastname;
	string firstname;

	string phone;
	string email;
public:
	Contact();
	Contact(string U_lastname, string U_firstname, string U_phone, string U_email);
	string getlastname();
	string getfirstname();

	string getphone();
	string getemail();
	void setlastname(string);
	void setfirstname(string);

	void setphone(string);
	void setemail(string);
	void input();
	void output();
};
#endif