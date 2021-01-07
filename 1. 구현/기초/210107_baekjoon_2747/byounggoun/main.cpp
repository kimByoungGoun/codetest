#include <iostream>

using namespace std;

int main()
{
	int front = 1;
	int back = 1;
	int count;
	int result;
	cin >> count;
	if (count < 3)
	{
		result = 1;
	}
	else
	{
		for (int i = 2; i < count; i++)
		{
			int tmp = front + back;
			front = back;
			back = tmp;

			result = back;
		}
	}
	cout << result << endl;
	return 0;
}

