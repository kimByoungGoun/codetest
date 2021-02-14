#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int max = 0;
	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		int in, out;
		cin >> out >> in;
		total = total - out + in;
		if (total > max)
		{
			max = total;
		}
	}
	cout << max << endl;
	return 0;
}