#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int count;
	cin >> a >> b >> c;
	if (b >= c)
	{
		count = -1;
	}
	else
	{
		count = a / (c - b) + 1;
	}

	cout << count << endl;
	return 0;
}

