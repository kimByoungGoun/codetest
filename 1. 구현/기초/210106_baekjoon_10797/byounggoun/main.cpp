#include <iostream>

using namespace std;

int main()
{
	int tmp;
	int day;
	int result = 0;
	cin >> tmp;
	day = tmp % 10;
	for (int i = 0; i < 5; i++)
	{

		cin >> tmp;
		tmp = tmp % 10;
		if (tmp == day)
		{
			result++;
		}
	}
	cout << result << endl;
	return 0;
}

