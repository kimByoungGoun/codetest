#include <iostream>

using namespace std;

int main()
{
	int result = 0;
	int divs[42];
	for (int i = 0; i < 42; i++)
	{
		divs[i] = 0;
	}
	for (int i = 0; i < 10; i++)
	{
		int tmp;
		cin >> tmp;
		divs[tmp % 42] = divs[tmp % 42] + 1;
	}
	for (int i = 0; i < 42; i++)
	{
		if (divs[i] > 0)
		{
			result++;
		}
	}
	cout << result << endl;
	return 0;
}

