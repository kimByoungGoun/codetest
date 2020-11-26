#include <iostream>
#include <vector>

using namespace std;

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main() {
	int row;
	int col;
	
	cin >> row;
	cin >> col;

	vector <int> dp(col+1,0);
	vector <int> tmp(col+1);
	tmp[0] = 0;
	int result = 0;
	for (int i = 1; i < row+1; i++)
	{
		for (int j = 1; j < col+1; j++)
		{
			cin >> tmp[j];
			dp[j] = max(dp[j], dp[j - 1]) + tmp[j];
		}
	}
	cout << dp[col] << endl;
	return 0;
}