// Ch10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdlib.h> // win10 system calls: system();

using namespace std;

void displayHeader();
void displayMainMenu();
void displaySales(double, double, double, double);
void gotoMain();

int main()
{
	double sales0 = 0.0;
	double sales1 = 0.0;
	double sales2 = 0.0;
	double sales3 = 0.0;

	double salesTotal = 0.0;
	
	salesTotal = sales0 + sales1 + sales2 + sales3;
	
	int exit = 0;
	while (exit == 0)
	{

	// UI
	displayHeader();
	
	// Main Menu
	displayMainMenu();
	cout << ">>";

	int menuChoice = 0;
	cin >> menuChoice;
	
	// Main Menu Swtich
	switch (menuChoice)
	{
	case 1: 
		displaySales(sales0, sales1, sales2, sales3);
		break;
	default: 
		cout << "Sorry, currently under development.";
	} // end Switch

	cout << "\n\nExit ERMS? (Press 1 to exit) >> ";
	cin >> exit;

	} // end MainLoop
	
}

void displayHeader()
{
	cout << "-----------------------------" << endl
		<< "MARTIN SPORTS" << endl
		<< "Atlanta, GA" << endl
		<< "-----------------------------"<< endl << endl;

}

void displayMainMenu()
{
	cout << "Please choose one of the following options:" << endl
		<< "1. Sales" << endl
		<< "2. Personel" << endl
		<< "3. Expense Reports" << endl;
}

void displaySales(double sales0, double sales1, double sales2, double sales3)
{
	double totalSales = sales1 + sales1 + sales2 + sales3;
	system("cls"); // Clear screen

	displayHeader();
	// sales page data report
	cout << endl <<
		"Sales Report for all Stores:" << endl <<
		"1. Anchor Store: $" << sales0 << endl <<
		"2. Ridgewood: $" << sales1 << endl <<
		"3. Phiffer: $" << sales2 << endl <<
		"4. Mall Kiosk: $" << sales3 << endl <<
		"-----------------------" << endl <<
		"Total sales: $" << totalSales << endl;

	cout << "Need to update sales information for a store? (Y/N)";
	setSales();

	gotoMain();
	
}

void gotoMain() 
{
	char toMain = 'Y';
	while (toMain == toupper('Y'))
	{
		cout << "Back to main menu? (Y/N) ";
		cin >> toMain;
	}

	system("CLS");
}