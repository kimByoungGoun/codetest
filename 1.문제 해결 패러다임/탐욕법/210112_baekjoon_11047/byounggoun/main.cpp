#include <iostream>

using namespace std;

int main()
{
	int count;
	int target;
	int nums[10];
	int result = 0;
	cin >> count >> target;
	for (int i = 0; i < count; i++)
	{
		cin >> nums[i];
	}
	for (int i = count-1;i >= 0;i--)
	{
		if (target >= nums[i])
		{
			target = target - nums[i];
			result++;
			i++;
		}
	}
	cout << result << endl;
	return 0;
}

