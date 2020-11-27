#include <iostream>

using namespace std;

int map[1001];

int main() {
	for (int i = 0; i < 1001; i++)
	{
		map[i] = 1;
	}
	map[1] = 0;
	for (int i = 2; i < 1001; i++)
	{
		if (map[i] == 1)
		{
			for (int j = i+1; j < 1001; j++)
			{
				if ((j % i) == 0)
				{
					map[j] = 0;
				}
			}
		}
	}
	int count;
	int result = 0;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int tmp;
		cin >> tmp;
		if (map[tmp] == 1)
		{
			result++;
		}
	}
	cout << result << endl;

	return 0;
}