#include <iostream>
#define endl "\n"
#define MAX 100001
using namespace std;

int before_value[MAX] = { 0 };
int weight_value[MAX] = { 0 };

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

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int count, max_weight;
	cin >> count >> max_weight;
	for (int i = 0; i < count; i++)
	{
		int weight, value;
		cin >> weight >> value;
		for (int j = weight; j <= max_weight; j++)
		{
			weight_value[j] = max(before_value[j - weight] + value, before_value[j]);
		}
		for (int j = 0; j <= max_weight; j++)
		{
			before_value[j] = weight_value[j];
		}
	}
	int result = weight_value[max_weight];
	cout << result << endl;
	return 0;
}