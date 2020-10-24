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


int main() {
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int length;
		cin >> length;
		vector<int> top(length);
		for (int j = 0; j < length; j++)
		{
			cin >> top[j];
		}
		vector<int> bottom(length);
		for (int j = 0; j < length; j++)
		{
			cin >> bottom[j];
		}

		vector<int> dp_top(length);
		vector<int> dp_bottom(length);
		dp_top[0] = top[0]; dp_bottom[0] = bottom[0];
		dp_top[1] = bottom[0] + top[1]; dp_bottom[1] =  top[0] + bottom[1];

		for (int j = 2; j < length; j++)
		{
			dp_top[j] = max(dp_bottom[j - 1] + top[j], dp_bottom[j - 2] + top[j]);
			dp_bottom[j] = max(dp_top[j - 1] + bottom[j], dp_top[j - 2] + bottom[j]);
		}
		cout << max(dp_bottom.back(), dp_top.back()) << endl;
	}

	return 0;
}