#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int result = 0;
	for (int i = 0; i < input.length(); i++)
	{
		char num = input.at(i);
		for (char tmp : "ADGJMPTW")
		{
			result += num >= tmp;
		}
		result++;
		
	}
	cout << result << endl;
	return 0;
}

