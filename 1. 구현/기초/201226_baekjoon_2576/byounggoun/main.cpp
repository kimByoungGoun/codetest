#include <iostream>

using namespace std;

int main()
{
	int count = 7;
	int result = 0;
	int tmp;
	int min = 100;
	for (int i = 0; i < count; i++)
	{
		cin >> tmp;
		if (tmp % 2 == 1)
		{
			result = result + tmp;
			if (tmp < min)
			{
				min = tmp;
			}
		}
	}
	if (result == 0)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << result << endl << min << endl;

	}
	
	return 0;
}

