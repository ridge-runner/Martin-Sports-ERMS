// Ch10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// TODO: refactor setSales() and getSales(). Get setSales() to update sales figures for stores.

#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdlib.h> // win10 system calls: system();

using namespace std;

void displayHeader();
void displayMainMenu();
void displaySales(double &, double &, double &, double &);
void gotoMain();
double setSales(double, double, double, double);

int main()
{
	double sales0 = 0.0; // number == store number
	double sales1 = 0.0;
	double sales2 = 0.0;
	double sales3 = 0.0;

	
	int exit = 0;
	while (exit == 0)
	{

	// UI
	displayHeader();
	
	// Main Menu
	displayMainMenu();
	cout << ">> ";

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
		"SALES REPORT FOR ALL STORES:" << endl <<
		"1. Anchor Store: $" << sales0 << endl <<
		"2. Ridgewood: $" << sales1 << endl <<
		"3. Phiffer: $" << sales2 << endl <<
		"4. Mall Kiosk: $" << sales3 << endl <<
		"-----------------------" << endl <<
		"Total sales: $" << totalSales << endl;
	
	// Option menu UI
	int option = 0;
	cout <<
		"OPTIONS:" << endl <<
		"1. Update Sales data for store location." << endl <<
		"2. Return to Main Menu." << endl <<
		">> ";
	cin >> option;

	switch (option)
	{
	case 1:
		setSales(&sales1, &sales1, &sales2, &sales3);
	
	case 2:
		gotoMain();
	}
		
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

double setSales(double &s0, double &s1, double &s2, double &s3)
{
	int option = 9;
	cout <<
		"Please enter the store number:" << endl <<
		"0 Anchor" << endl <<
		"1 Ridgewood" << endl <<
		"2 Phiffer" << endl <<
		"3 Mall Kiosk" << endl <<
		">> ";
	cin >> option;
	switch (option)
	{
	case 0: 
		s0 = 

	}

}