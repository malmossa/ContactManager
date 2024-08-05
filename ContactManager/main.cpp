#include "UI.h"
#include "Utilities.h"

#include <iostream>
#include <chrono>

using namespace std;

int main()
{

	UI display;
	Utilities textColor;
	
	textColor.setTextColor("white");
	
	display.Header();
	display.Menu();

	

	return 0;
}