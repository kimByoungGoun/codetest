#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int total = 0;
	for (int i = 0; i < 4; i++)
	{
		int time;
		cin >> time;
		total = total + time;
	}
	cout << total / 60 << endl << total % 60 << endl;
	return 0;
}