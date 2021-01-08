#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int a, b;
		cin >> a >> b;
		for (int j = 1;;j++)
		{
			if ((a*j) % b == 0)
			{
				cout << a * j << endl;
				break;
			}
		}
	}
	return 0;
}

