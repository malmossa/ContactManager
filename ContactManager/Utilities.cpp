#include "Utilities.h"

Utilities::Utilities() {};

void Utilities::setTextColor(string color)
{
	if (color == "red") { cout << "\x1B[91m"; };

	if (color == "white") { cout << "\x1B[97m"; };

	if (color == "green") { cout << "\x1B[92m"; };

	if (color == "yellow") { cout << "\x1B[93m"; };
	
}