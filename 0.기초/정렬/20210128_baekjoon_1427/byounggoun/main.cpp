#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b)
{
	return a > b;
}

int main() {

	int  num;
	int nums[10];
	int length = 0;
	cin >> num;
	for (int i = 0;;i++)
	{
		length++;
		nums[i] = num % 10;
		if (num == (num % 10))
		{
			break;
		}
		else
		{

			num = num / 10;
		}
	}
	sort(nums, nums + length, desc);
	for (int i = 0; i < length; i++)
	{
		cout << nums[i];
	}
	return 0;
}