#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int count, result = 0;
		cin >> count;
		for (int j = 0; j < count; j++)
		{
			int tmp;
			cin >> tmp;
			result += tmp;
		}
		cout << result << endl;
	}

	return 0;
}