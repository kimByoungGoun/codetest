#include <iostream>
#include <vector>

using namespace std;

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


int main(void)
{
	int count;
	cin >> count;
	vector<int> sum(count+1,0);
	int length;
	int cost;
	for (int i = 1; i < count+1; i++)
	{
		cin >> length >> cost;
		
		if (i + length -1 > count)
		{
		}
		else
		{
			sum[i + length - 1] = max(sum[i-1] + cost, sum[i + length - 1]);

		}
		sum[i] = max(sum[i - 1], sum[i]);
		
	}
	cout << sum.back() << endl;
	return 0;
}