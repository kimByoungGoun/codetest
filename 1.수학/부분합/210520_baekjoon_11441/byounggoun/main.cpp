#include <iostream>

#define endl "\n"
using namespace std;
int nums[100001];

void init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(void)
{
	init();
	int count;
	cin >> count;
	nums[0] = 0;
	for (int i = 1; i < count+1; i++)
	{
		cin >> nums[i];
		nums[i] = nums[i - 1] + nums[i];
	}
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int from, to;
		cin >> from >> to;
		cout << nums[to] - nums[from - 1] << endl;;
	}
	return 0;
}