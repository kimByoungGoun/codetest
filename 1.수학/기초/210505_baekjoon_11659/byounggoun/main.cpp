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
	int numcount, calcount;
	cin >> numcount >> calcount;
	nums[0] = 0;
	for (int i = 1; i < numcount+1; i++)
	{
		int tmp = 0;
		cin >> tmp;
		nums[i] = tmp + nums[i-1];
	}
	for (int i = 0; i < calcount; i++)
	{
		int from, to;
		cin >> from >> to;
		cout << nums[to] - nums[from-1] << endl;
	}
	return 0;
}