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
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int length;
		int select;
		cin >> select >> length;
		vector<int> defore;
		vector<int> dp;
		dp.push_back(1);
		dp.push_back(1);
		defore.assign(dp.begin(), dp.end());
		
		for (int j = 2; j < length + 1; j++)
		{
			for (int k = 1; k < j; k++)
			{
				dp[k] = defore[k - 1] + defore[k];
			}
			dp.push_back(1);
			defore.assign(dp.begin(), dp.end());
		}
		cout << dp[select] << endl;
	}

	return 0;
}