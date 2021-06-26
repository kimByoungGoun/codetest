#include <iostream>
#include <vector>

#define endl "\n"
using namespace std;

void init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(void)
{
	init();
	int num;
	vector <int> result;
	int div;

	cin >> num;
	for (int i = 2;;)
	{
		div = num % i;
		if (div == 0)
		{
			num = num / i;
			result.push_back(i);
		}
		else
		{
			i++;
		}
		if (num <= 1)
		{
			break;
		}
	}
	for (int i = 0; i < result.size(); i++)
	{
		cout << result.at(i) << endl;
	}
	return 0;
}