#include <iostream>
#include <vector>

using namespace std;

int main() {
	int row;
	int col;
	
	cin >> row;
	cin >> col;

	vector <int> dp(1,1);
	vector <int> tmp(2,1);
	int result = 0;
	for (int i = 1; i < row+2; i++)
	{
		tmp.push_back(1);
		dp.push_back(1);
		for (int j = 1; j < i-1; j++)
		{
			
			tmp[j] = (dp[j - 1] + dp[j])%10007;
		}
		for (int j = 0; j < i; j++)
		{
			
			dp[j] = tmp[j];
		}
	}
	cout << dp[col] << endl;
	return 0;
}