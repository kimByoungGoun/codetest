#include <iostream>

using namespace std;

int main() {
	int count;
	cin >> count;
	int min = 1000000;
	int max = -1000000;
	for (int i = 0; i < count; i++)
	{
		int tmp;
		cin >> tmp;
		if (tmp > max)
		{
			max = tmp;
		}
		if (tmp < min)
		{
			min = tmp;
		}
	}
	cout << min << " " << max << endl;
	return 0;
}