#include <iostream>
using namespace std;

int main(void)
{
	int count, tmp, result = 0;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> tmp;
		if (tmp > 0)
		{
			result++;
		}
		else
		{
			result--;
		}
	}
	if (result > 0)
	{
		cout << "Junhee is cute!" << endl;
	}
	else
	{
		cout << "Junhee is not cute!" << endl;
	}
	return 0;
}