#include <iostream>

using namespace std;

int main() {
	int count;
	cin >> count;
	int result;
	int nums[3];
	nums[0] = 0;
	nums[1] = 1;
	nums[2] = 2;
	for (int i = 2; i < count; i++)
	{
		int tmp = nums[1] + nums[2];
		nums[0] = nums[1];
		nums[1] = nums[2];
		nums[2] = tmp% 15746;
	}
	if (count < 3)
	{
		result = nums[count];
	}
	else
	{
		result = nums[2];
	}
	cout << result << endl;
	
	return 0;
}