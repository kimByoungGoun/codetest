#include <iostream>
using namespace std;

int main()
{
	bool check[100001];
	for (int i = 0; i < 100001; i++)
	{
		check[i] = true;
	}
	check[0] = false;
	check[1] = false;
	int m, n;
	int result = 0;
	int min = 100000;
	cin >> m >> n;
	for (int i = 2; i < n; i++)
	{
		if (check[i] == true)
		{
			for (int j = i + i; j <= n; j = j + i)
			{
				check[j] = false;
			}
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (check[i] == true)
		{
			if (i < min)
			{
				min = i;
			}
			result = result + i;
		}
	}
	if (result == 0)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << result << endl << min << endl;
	}

	return 0;
}