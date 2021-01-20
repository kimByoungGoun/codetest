#include <iostream>
using namespace std;

int main()
{
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int k, n;
		int result;
		cin >> k >> n;
		int before[14];
		int current[14];
		for (int j = 0; j < n; j++)
		{
			current[j] = j + 1;
		}
		for (int j = 0; j < k; j++)
		{
			for (int l = 0; l < n; l++)
			{
				before[l] = current[l];
			}
			for (int l = 1; l < n; l++)
			{
				current[l] = current[l-1] + before[l];
			}
		}
		result = current[n-1];
		cout << result << endl;
	}
	return 0;
}

