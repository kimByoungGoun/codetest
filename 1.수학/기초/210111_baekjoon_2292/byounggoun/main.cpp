#include <iostream>

using namespace std;

int main()
{
	int result = 1;
	int target;
	int border = 1;
	cin >> target;
	for (;;)
	{
		if (target <= border)
		{
			break;
		}
		else
		{
			border = border + (result * 6);
			result++;
		}
	}
	
	cout <<  result << endl;
	return 0;
}

