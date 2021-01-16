#include <iostream>
#include <string>

using namespace std;

int main()
{
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int mul;
		string input;
		cin >> mul >> input;
		for (int j = 0; j < input.length(); j++)
		{
			for (int k = 0; k < mul; k++)
			{
				cout << input.at(j);
			}
		}
		cout << endl;
	}
	return 0;
}

