#include <iostream>
#include <cstring>
#include <cmath>
#include "base.h"

using namespace std;

int main()
{
	int base;
	int num;
	InVal num_c;

	cout << "Please enter the number you wish to convert:\n";

	cin >> num;

	if (cin.fail())
	{
		cout << "This is not a valid input.\n\n";
		return 1;
	}

	cout << "Please enter the base you wish to convert to:\n";

	cin >> base;

	if (cin.fail())
	{
		cout << "This is not a valid input.\n\n";
		return 1;
	}

	if (base < 2 || base > 16)
	{
		cout << "You have entered a base that is outside of\n"
		     << "the valid range.\n\n";
		return 1;
	}

	num_c.init_val(num,10);

	cout << "Your number is: ";
	num_c.PrintAsBase(base);
}
