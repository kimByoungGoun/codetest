#include <iostream>
using namespace std;


int main()
{
	int count;
	cin >> count;
	int result = 1-count;
	for (int i = 0; i < count; i++)
	{
		int tmp;
		cin >> tmp;
		result += tmp;
	}
	cout << result << endl;
	return 0;
}