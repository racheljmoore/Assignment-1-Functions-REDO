#include <iostream>
#include "Functions.h"
using namespace std;
int menu()
{
	int choice = 0;
	cout << "1 + " << endl;
	cout << "2 - " << endl;
	cout << "3 exit" << endl;
	cin >> choice;
	return choice;
}


void addit()
{
	int num1 = 3;
	int num2 = 4;
	int total = num1 + num2;
	cout << "numbers added" << total;
}