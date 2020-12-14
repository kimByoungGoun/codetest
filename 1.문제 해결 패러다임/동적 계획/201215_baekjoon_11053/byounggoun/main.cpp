#include <iostream>

using namespace std;


int main()
{
	int count;
	int nums[1001];
	int d[1001];
	int result = 0;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> nums[i];
	}
	d[0] = 1;

	for (int i = 1; i < count; i++) {
		d[i] = 1;
		for (int j = 0; j < i; j++) {
			if (nums[j] < nums[i] && d[i] <= d[j]) {
				d[i] = d[j] + 1;
			}
		}
	}
	for (int i = 0; i < count; i++)
	{
		if (result < d[i])
		{
			result = d[i];
		}
	}
	cout << result << endl;
	return 0;
}