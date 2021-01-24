#include <iostream>
using namespace std;

int main()
{
	int count, a, b;
	cin >> count >> a >> b;
	int result = 0;
	for (int i=0;;i++)
	{
		result++;
		a = (a + 1) / 2;
		b = (b + 1) / 2;
		if (a == b)
		{
			break;
		}
	}
	cout << result << endl;
	return 0;
}