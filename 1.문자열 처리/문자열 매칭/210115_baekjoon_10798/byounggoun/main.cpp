#include <iostream>
#include <string>


using namespace std;

int main()
{
	string chars[5];
	string result;
	for (int i = 0; i < 5; i++)
	{
		cin >> chars[i];
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			string tmp = chars[j];
			if (tmp.length() > i)
			{
				result.append(tmp.substr(i,1));
			}
		}
		
	}
	cout << result;


	return 0;
}

