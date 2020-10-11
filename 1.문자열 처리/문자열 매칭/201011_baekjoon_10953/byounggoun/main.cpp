#include <iostream>
#include <string>

using namespace std;


int main(void) {
	int count;
	cin >> count;
	string input;
	int result;
	for (int i = 0; i < count; i++)
	{
		cin >> input;
		result = int(input[0])-48 + int(input[2])-48;
		cout << result << endl;
	}
	return 0;
}