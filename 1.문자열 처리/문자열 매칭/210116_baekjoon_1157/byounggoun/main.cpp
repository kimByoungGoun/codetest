#include <iostream>
#include <string>


using namespace std;

int main()
{
	string input;
	int list[26] = { 0 };
	char result;
	int result_count = 0;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		int tmp = int(input.at(i));
		if (tmp > 90)
		{
			tmp = tmp - 32;
		}
		list[tmp - 65] = list[tmp - 65] + 1;
	}
	for (int i = 0; i < 26; i++)
	{
		if (list[i] > result_count)
		{
			result_count = list[i];
			result = char(i + 65);
		}
		else if (list[i] == result_count)
		{
			result_count = list[i];
			result = '?';
		}
	}
	cout << result << endl;
	return 0;
}

