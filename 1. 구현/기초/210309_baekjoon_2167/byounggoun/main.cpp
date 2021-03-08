#include <iostream>
using namespace std;

short nums[300][300];

int main(void)
{

	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			short tmp;
			cin >> tmp;
			nums[i][j] = tmp;
		}
	}
	int K;
	cin >> K;
	for (int k = 0; k < K; k++)
	{
		int i, j, x, y;
		cin >> i >> j >> x >> y;
		int result = 0;
		for (int new_i = i - 1; new_i < x; new_i++)
		{
			for (int new_j = j - 1; new_j < y; new_j++)
			{
				result = result + nums[new_i][new_j];
			}
		}
		cout << result << endl;
	}


	return 0;
}