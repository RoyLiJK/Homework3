#include<iostream>
#include<string>
#include"Address.h"
#include"Contact.h"
using namespace std;

int main()
{
	string Arr[10];
	
	
	cout << "Enter up to 10 Contacts (enter 0 to exit):  " << endl;
	for (int i = 0; i < 10;i++)
	{
		
			cin >> Arr[i];
		
			if (Arr[i] == "0")
				break;
	}

	for (int j = 0; j < 10; j++)
	{
		cout << "Your contact are: " << Arr[j] << endl;
	}
	return 0;
}