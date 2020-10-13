#include <iostream>
#include <string>

using namespace std;


int main(void) {
	string input;
	cin >> input;
	
	for (;;)
	{
		if (input.length() > 10)
		{
			cout << input.substr(0, 10) << endl;
			input = input.substr(10);
		}
		else
		{
			cout << input << endl;
			break;
		}
	}
	return 0;
}