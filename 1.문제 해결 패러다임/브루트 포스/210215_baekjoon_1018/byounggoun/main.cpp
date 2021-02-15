#include <iostream>

using namespace std;

int chess[50][50];

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
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			char input;
			cin >> input;
			if (input == 'W')
			{
				chess[i][j] = 0;
			}
			else
			{
				chess[i][j] = 1;
			}
		}
	}

	
	int result = 9999;
	for (int i = 0; i < N - 7; i++)//총 해봐야 하는 판(세로)
	{
		for (int j = 0; j < M - 7; j++)//총 해봐야 하는 판(가로)
		{
			int white_start_count = 0;//이번 판에서 흰색으로 시작 할 경우 고쳐야 하는 횟수
			for (int k = 0; k < 8; k++)//한 판 시도 내에서 세로 진행
			{
				for (int l = 0; l < 8; l++)//한 판 시도 내에서 가로 진행
				{
					if (chess[i + k][j + l] == (i + k + j + l)%2)
					{

					}
					else
					{
						white_start_count++;
					}
				}
			}
			result = min(result, white_start_count);
			int black_start_count = 0;//이번 판에서 흰색으로 시작 할 경우 고쳐야 하는 횟수
			for (int k = 0; k < 8; k++)//한 판 시도 내에서 세로 진행
			{
				for (int l = 0; l < 8; l++)//한 판 시도 내에서 가로 진행
				{
					if (chess[i + k][j + l] == (i + k + j + l) % 2)
					{
						black_start_count++;
					}
					else
					{
					}
				}
			}
			result = min(result, black_start_count);
		}
	}
	cout << result << endl;
	return 0;
}