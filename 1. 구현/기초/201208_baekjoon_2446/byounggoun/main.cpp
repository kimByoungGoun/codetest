#include <iostream>

using namespace std;

int main() {
	int count;

	cin >> count;
	for (int i = 0; i < count; i++)
	{
		for (int j = count - i; j < count; j++)
		{
			cout << " ";

		}
		for (int j = i*2; j < (count*2)-1; j++)
		{
			cout << "*";

		}
		cout << endl;
		
	}
	for (int i = 1; i < count; i++)
	{
		for (int j = count - i-1; j >0; j--)
		{
			cout << " ";

		}
		for (int j = 0; j < (i * 2) + 1; j++)
		{
			cout << "*";

		}
		cout << endl;

	}

	return 0;
}