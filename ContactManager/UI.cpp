#include "UI.h"
#include <iostream>

using namespace std;

UI::UI() {}

void UI::Header()
{
	cout << "****************************************" << endl;
	cout << "********    CONTACTS MANAGER    ********" << endl;
	cout << "****************************************" << endl;
	cout << endl;
}

void UI::Menu()
{
	cout << "Choose from the menu below: " << endl;
	cout << "[S] Search a contact." << endl;
	cout << "[V] View all contacts." << endl;
	cout << "[A] Add new contact." << endl;
	cout << "[U] Update an existing contact." << endl;
	cout << "[D] Delete a contact." << endl;
}
