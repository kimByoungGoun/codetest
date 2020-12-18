#include <iostream>

using namespace std;


int main()
{
	int count;
	cin >> count;
	int nums[1001];
	int dp[1001];
	for (int i = 1; i < count+1; i++)
	{
		cin >> nums[i];
	}
	for (int i = 1; i < count+1; i++)
	{
		dp[i] = nums[i];
	}


	for (int i = 1; i < count+1;i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (nums[j] < nums[i] && dp[j] + nums[i] >= dp[i])
			{
				dp[i] = dp[j] + nums[i];
			}
		}
	}
	int result = 0;
	for (int i = 1; i < count + 1; i++)
	{
		if (result < dp[i])
		{
			result = dp[i];
		}
		
	}
	cout << result << endl;
	return 0;
}