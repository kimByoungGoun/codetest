#include <iostream>
using namespace std;


int main()
{
	int total;
	cin >> total;
	for (int i = 0; i < 9; i++)
	{
		int tmp;
		cin >> tmp;
		total -= tmp;
	}
	cout << total << endl;
	return 0;
}