#include <iostream>
#include "Functions.h"
using namespace std;

int main()
{
	int option;
	option = menu();
	cout << option;
	if (option == 1)
	{
		cout << "you choose" << option;
		addit();

	}
	else if (option == 2)
	{
		cout << "you choose" << option;
	}
	else
	{
		cout << "exit" << endl;

	}

}