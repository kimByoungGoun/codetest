#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;
	for (;;)
	{
		string result = "yes";
		cin >> input;
		if(input == "0")
		{
			break;
		}
		
		int itor = input.length() / 2;


		for (int i = 0; i < itor; i++)
		{
			if (input.at(i) != input.at(input.length() - 1 - i))
			{
				result = "no";
			}
		}
		cout << result << endl;
		
	}
	return 0;
}