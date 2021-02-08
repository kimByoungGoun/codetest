#include <iostream>
using namespace std;


int main()
{
	int X;
	cin >> X;
	int bar = 64;
	int result = 0;
	for (;;)
	{
		if (X >= bar)
		{
			X = X - bar;
			result++;
		}
		else
		{
			bar = bar / 2;
			
		}
		if (X == 0)
		{
			break;
		}
		else
		{
			
		}
	}
	cout << result << endl;
	return 0;
}