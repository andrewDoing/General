#include <iostream>
#include <cstdlib>
#include <string>
#include "base.h"

using namespace std;

InVal::InVal()
{
	num = base = 0;
}

void InVal::init_val(int in_num, int in_base)
{
	num = in_num;
	base = in_base;
}

void InVal::PrintAsBase(int out_base)
{
	string digits("0123456789ABCDEF");
	bool is_neg = num < 0;
	string result;
	int in_num = num;
	int in_base = out_base;

	for (; in_num; in_num /= in_base)
	{
		result.insert(result.begin(), digits[abs(in_num % in_base)]);
	}

	if (is_neg)
	{
		result.insert(result.begin(), '-');
	}

	cout << result << '\n';

}
