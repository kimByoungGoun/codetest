#include <iostream>

using namespace std;


int main(void) {
	long long before = 1;
	long long after = 3;
	long long tmp;
	int count;
	cin >> count;
	int result;
	if (count == 1)
	{
		result = before;
	}
	else if (count == 2)
	{
		result = after;
	}
	else 
	{
		for (int i = 2; i < count; i++)
		{
			tmp = after%10007;
			after = (before*2 + after) % 10007;
			before = tmp;

		}
		result = after;
	}
	cout << result << endl;

	return 0;
}