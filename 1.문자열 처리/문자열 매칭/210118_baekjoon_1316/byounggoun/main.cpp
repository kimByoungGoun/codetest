#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count;
	cin >> count;
	int result = 0;
	int check[26];

	for (int i = 0; i < count; i++)
	{
		string input;
		cin >> input;
		bool correct = true;
		for (int j = 0; j < 26; j++)
		{
			check[j] = 0;
		}
		char before = ' ';
		for (int j = 0; j < input.length(); j++)
		{
			char current = input.at(j);
			if (current == before)
			{
				continue;
			}
			else
			{

				if (check[int(current) - 97] > 0)
				{
					correct = false;
					break;
				}
				else
				{
					check[current - 97] += 1;
				}

				before = current;
			}

		}
		if (correct)
		{
			result++;
		}
	}
	cout << result << endl;
	return 0;
}

