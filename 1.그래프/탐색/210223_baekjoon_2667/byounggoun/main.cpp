#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dx[4] = { 0,1,0,-1 };
int dy[4] = { -1,0,1,0 };
int arr[25][25];
bool vi[25][25] = { false, };
int cnt;
int tmp;
vector<int> result;

void dfs(int a, int b)
{
	vi[a][b] = true;
	cnt = cnt + 1;
	for (int i = 0; i < 4; i++)
	{
		int newY = a + dy[i];
		int newX = b + dx[i];
		

		if (0 <= newX && 0 <= newY && newX < tmp && newY < tmp)
		{
			if (arr[newY][newX] == 1 && !vi[newY][newX])
			{
				dfs(newY, newX);
			}
		}
	}
}

int main()
{
	cin >> tmp;
	for (int i = 0; i < tmp; i++)
	{
		string input;
		cin >> input;
		for (int j = 0; j < input.length(); j++)
		{
			arr[i][j] = input.at(j)-48;
		}
	}

	for (int i = 0; i < tmp; i++)
	{
		for (int j = 0; j < tmp; j++)
		{
			if (arr[i][j] == 1 && vi[i][j] == false)
			{
				cnt = 0;
				dfs(i, j);
				result.push_back(cnt);
			}
		}
	}

	sort(result.begin(), result.end());

	cout << result.size() << endl;
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}

	return 0;
}