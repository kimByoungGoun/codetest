#include <iostream>

using namespace std;

int main()
{
	int count;
	int nums[1001] = { 0 };
	cin >> count;
	int max = 0;
	int waitting = 0;
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		int tmp;
		cin >> tmp;
		nums[tmp] = nums[tmp] + 1;
		if (tmp > max)
		{
			max = tmp;
		}
	}
	for (int i = 0; i < max+1; i++)
	{
		for (int j = 0; j < nums[i]; j++)
		{
			waitting = waitting + i;
			result = result + waitting;
		}

		
	}
	cout << result << endl;
	return 0;
}

