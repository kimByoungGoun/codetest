#include <iostream>

using namespace std;


int main(void)
{
	int count;
	int num;
	long long result;
	long long DP[6];
	long long tmp;

	cin >> count;
	for (int j = 0; j < count; j++)
	{
		DP[0] = 1; DP[1] = 1; DP[2] = 1; DP[3] = 2; DP[4] = 2; DP[5] = 3;
		cin >> num;
		if (num < 7)
		{
			result = DP[num - 1];
		}
		else
		{
			for (int i = 6; i < num; i++)
			{

				tmp = DP[5];
				DP[5] = DP[5] + DP[1];
				DP[0] = DP[1];
				DP[1] = DP[2];
				DP[2] = DP[3];
				DP[3] = DP[4];
				DP[4] = tmp;
			}
			result = DP[5];
		}

		cout << result << endl;
	}

	return 0;
}