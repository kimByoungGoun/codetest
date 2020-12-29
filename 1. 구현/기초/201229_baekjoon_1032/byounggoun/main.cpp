#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count;
	string inputs[50];
	cin >> count;
	char result[50];
	for (int i = 0; i < count; i++)
	{
		cin >> inputs[i];
	}
	int length = inputs[0].length();
	for (int i = 0; i < length; i++)
	{
		char tmp = inputs[0].at(i);
		result[i] =tmp;
		for (int j = 1; j < count; j++)
		{
			if (inputs[j].at(i) != tmp)
			{
				result[i] = '?';
			}
		}
	}
	for (int i = 0; i < length; i++)
	{
		cout << result[i];
	}
	cout << endl;
	return 0;
}

