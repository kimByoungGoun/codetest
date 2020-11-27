#include <iostream>

using namespace std;

int row;
int col;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };
int map[501][501];
int dp[501][501];

int dfs(int y, int x)
{
	if ((y == row) && (x == col))
	{
		return 1;
	}
	else if (dp[y][x] == -1)
	{
		dp[y][x] = 0;
		for (int k = 0; k < 4; k++)
		{
			int nexty = y + dy[k];
			int nextx = x + dx[k];
			if (nextx > 0 && nexty > 0 && nextx <= col && nexty <= row && map[y][x] > map[nexty][nextx])
			{
				dp[y][x] = dp[y][x] + dfs(nexty,nextx);
			}
		}
	}
	return dp[y][x];
}

int main() {


	cin >> row;
	cin >> col;


	for (int i = 0; i <= row; i++)
	{
		for (int j = 0; j <= col; j++)
		{
			dp[i][j] = -1;
			map[i][j] = 10001;
		}
	}

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			cin >> map[i][j];
		}
	}
	cout << dfs(1,1) << endl;
	return 0;
}