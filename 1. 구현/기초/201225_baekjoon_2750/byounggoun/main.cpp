#include <iostream>

using namespace std;

int main()
{
	int count;
	int nums[2001] = { 0, };
	cin >> count;
	int tmp;
	for (int i = 0; i < count; i++)
	{
		cin >> tmp;
		nums[tmp+1000] = 1;
	}
	for (int i = 0; i < 2001; i++)
	{
		if (nums[i] > 0)
		{
			cout << i-1000 << endl;
		}
	}

	return 0;
}

