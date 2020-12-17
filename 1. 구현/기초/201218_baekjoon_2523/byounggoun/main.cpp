#include <iostream>

using namespace std;


int main()
{
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = count-1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}