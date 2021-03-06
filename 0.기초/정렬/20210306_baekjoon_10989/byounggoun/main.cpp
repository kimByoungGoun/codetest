#include <iostream>
#define MAX 10001
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int count;
	int max = 0;
	cin >> count;
	int nums[MAX] = { 0, };
	for (int i = 0; i < count; i++)
	{
		int tmp;
		cin >> tmp;
		nums[tmp] += 1;
		if (tmp > max)
		{
			max = tmp;
		}
	}
	
	for (int i = 0; i <= max; i++)
	{
		for (int j = 0; j < nums[i]; j++)
		{
			cout << i << '\n';
		}
	}

	return 0;
}