#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	string result = "";
	cin >> input;
	result = input.at(0);
	for (int i = 1; i < input.length(); i++)
	{
		if (input.at(i) == '-')
		{
			result = result + input.at(i+1);
		}
	}
	cout << result << endl;
	return 0;
}