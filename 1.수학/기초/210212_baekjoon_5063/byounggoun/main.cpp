#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int r, e, c, result;
		cin >> r >> e >> c;
		result = e - (r + c);
		if (result > 0)
		{
			cout << "advertise" << endl;
		}
		else if (result == 0)
		{
			cout << "does not matter" << endl;
		}
		else
		{
			cout << "do not advertise" << endl;
		}
	}
	return 0;
}