#include<iostream>
#include<string>
#include"Address.h"
#include"Contact.h"
using namespace std;

int main()
{
	Contact Arr[10];
	string s;
	
	cout << "Enter up to 10 Contacts (enter 0 to exit):  " << endl;
	for (int i = 0; i < 10;i++)
	{
		cin >> s;
		Arr[i].setfirstname(s);
		

			/*if (Arr[i].setfirstname("0") || Arr[i].setlastname("0"))
				break;*/
	}

	
		Arr[2].getfirstname();
		



	
	return 0;
}