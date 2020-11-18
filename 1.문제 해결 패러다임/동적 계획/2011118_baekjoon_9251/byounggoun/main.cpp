#include <iostream>
#include <string>
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

	string first = "";
	string second = "";
	cin >> first >> second;

	vector<int> dp(first.length()+1, 0);
	vector<int> tmp(first.length()+1, 0);

	for (int i = 0; i < second.length(); i++)
	{
		for (int j = 0; j < first.length(); j++)
		{
			if (second[i] == first[j])
			{
				tmp[j+1] = dp[j] + 1;
			}
			else
			{
				tmp[j+1] = max(tmp[j], dp[j+1]);
			}
		}
		dp.assign(tmp.begin(), tmp.end());

	}

	cout << dp.back() << endl;
		
	
	return 0;
}