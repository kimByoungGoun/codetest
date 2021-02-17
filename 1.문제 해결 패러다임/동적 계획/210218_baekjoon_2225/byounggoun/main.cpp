#include <iostream>
#define MOD 1000000000

using namespace std;

int dp[201][201] = { 0, };

int main()
{
	int N, K;
	cin >> N >> K;
	for (int i = 0; i <= N; i++)
	{
		dp[1][i] = 1;
	}
	for (int i = 0; i <= K; i++)
	{
		dp[i][0] = 1;
	}
	for (int i = 2; i <= K; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % MOD;
		}
	}

	cout << dp[K][N] << endl;
	return 0;
}