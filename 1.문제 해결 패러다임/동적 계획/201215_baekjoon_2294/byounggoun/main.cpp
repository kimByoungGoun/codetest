#include <iostream>

using namespace std;
int min(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int main()
{
	int coin_count, sum;
	cin >> coin_count >> sum;

	int coins[101] = { 0 };
	int dp[100001];
	for (int i = 0; i < 100001; i++)
	{
		dp[i] = 100010;
	}
	
	for (int i = 0; i < coin_count; i++)
	{
		cin >> coins[i];
		dp[coins[i]] = 1;
	}

	for (int i =1; i < sum+1; i++)
	{
		for (int j = 0; j < coin_count; j++)
		{
			
			if (i - coins[j] > 0)
			{
				int tmp;
				tmp = dp[i - coins[j]]+1;
				dp[i] = min(dp[i], tmp);

			}
		}

	}

	if (dp[sum] == 100010)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << dp[sum] << endl;
	}
	return 0;
}