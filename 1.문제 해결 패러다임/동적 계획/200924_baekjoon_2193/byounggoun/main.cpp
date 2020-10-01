#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	long long before = 1;
	long long after = 1;
	long long result = 0;
	int count = 0;
	cin >> count;
	if (count == 1)
	{
		result = 1;
	}
	if (count == 2)
	{
		result = 1;
	}

	for (int i = 2; i < count; i++)
	{
		long long tmp = after;
		after = before + after;
		before = tmp;
		result = after;

	}
	cout << result << endl;
	return 0;
}