#include <iostream>

using namespace std;


int main(void) {
	int sub = 1000000000;
	int length;
	int DP[2][10];
	DP[1][0] = 0;
	for (int i = 1; i < 10; i++)
	{
		DP[1][i] = 1;
	}
	int result = 0;
	cin >> length;

	for (int i = 1;i < length; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			DP[0][j] = DP[1][j];
		}
		DP[1][0] = DP[0][1];
		DP[1][9] = DP[0][8];
		for (int j = 1; j < 9; j++)
		{
			DP[1][j] = (DP[0][j - 1] + DP[0][j + 1])%sub;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		result = (result + DP[1][i])%sub;
	}
	cout << result << endl;
	return 0;
}