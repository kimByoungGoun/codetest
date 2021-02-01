#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int nums[3];
	for (;;)
	{
		cin >> nums[0] >> nums[1] >> nums[2];
		sort(nums, nums + 3);
		if ((nums[0] + nums[1] + nums[2]) == 0)
		{
			break;
		}
		if (nums[2]*nums[2] == (nums[0] * nums[0]) + (nums[1] * nums[1]))
		{
			cout << "right" << endl;
		}
		else
		{
			cout << "wrong" << endl;
		}
	}
	return 0;
}
