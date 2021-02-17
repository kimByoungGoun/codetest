#include <iostream>
#define MOD 9901

using namespace std;
int dp[3];
int dp_before[3];

int main()
{
	for (int i = 0; i < 3; i++)
	{
		dp[i] = 1;
		dp_before[i] = 1;
	}
	int size;
	cin >> size;
	for (int i = 1; i < size; i++)
	{
		dp[0] = (dp_before[0] + dp_before[1] + dp_before[2]) % MOD;
		dp[1] = (dp_before[0] + dp_before[2]) % MOD;
		dp[2] = (dp_before[0] + dp_before[1]) % MOD;

		for (int i = 0; i < 3; i++)
		{
			dp_before[i] = dp[i];
		}
	}
	cout << (dp[0] + dp[1] + dp[2]) % MOD << endl;
	return 0;
}