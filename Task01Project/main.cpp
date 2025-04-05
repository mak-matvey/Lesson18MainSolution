#include "logic.h"
#include <iostream>

int main(void)
{
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Your result: " << 
		(number > 999 || number < 0 ? "Error. Invalid number." : numberToWords(number)) << endl;
	
	return 0;
}