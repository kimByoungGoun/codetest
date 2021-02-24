#include <iostream>
using namespace std;

int heads[26] = { 0, };

int main()
{
	int count;
	char name[31];
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> name;
		heads[name[0] - 97] += 1;
	}
	bool giveup = true;
	for (int i = 0; i < 26; i++)
	{
		if (heads[i] >= 5)
		{
			cout << char(i + 97);
			giveup = false;
		}
	}
	if (giveup)
	{
		cout << "PREDAJA" << endl;
	}
	else
	{
		cout << endl;
	}
	return 0;
}