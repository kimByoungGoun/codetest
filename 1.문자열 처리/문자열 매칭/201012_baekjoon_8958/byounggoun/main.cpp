#include <iostream>
#include <string>

using namespace std;


int main(void) {
	int count;
	cin >> count;
	string input;
	int result = 0;
	int tmp_result = 0;
	for (int i = 0; i < count; i++)
	{
		cin >> input;
		for (int j = 0; j < input.length(); j++)
		{
			if (input.at(j) == 'O')
			{
				tmp_result = tmp_result + 1;
				result = result + tmp_result;
				
			}
			else
			{
				tmp_result = 0;
			}
		}
		cout << result << endl;
		tmp_result = 0;
		result = 0;
	}
	return 0;
}