#include <iostream>
using namespace std;


int main()
{
	int result = 0l;
	int passenger = 0;
	for (int i = 0; i < 4; i++)
	{
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		passenger = passenger - tmp1 + tmp2;
		if (passenger > result)
		{
			result = passenger;
		}
	}
	cout << result << endl;
	return 0;
}