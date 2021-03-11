#include <iostream>
#include <algorithm>
using namespace std;

short nums[10];

int main(void)
{
	int W = 0;
	int K = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> nums[i];
	}
	sort(nums, nums + 10);
	W = nums[7] + nums[8] + nums[9];

	for (int i = 0; i < 10; i++)
	{
		cin >> nums[i];
	}
	sort(nums, nums + 10);
	K = nums[7] + nums[8] + nums[9];
	cout << W << ' ' << K << endl;
	return 0;
}