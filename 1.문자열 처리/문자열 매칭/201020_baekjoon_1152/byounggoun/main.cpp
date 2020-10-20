#include <iostream>
#include <string>

using namespace std;


int main(void)
{
	string input_str;
	getline(cin, input_str);
	int result = 0;
	bool is_char = false;
	for (int i = 0; i < input_str.length(); i++)
	{
		if (input_str.at(i) != ' ')
		{
			if (is_char == false)
			{
				is_char = true;
			}
		}
		else
		{
			if (is_char == true)
			{
				is_char = false;
				result++;
			}
			
		}
	}
	if (input_str.at(input_str.length()-1) != ' ')
	{
		result++;
	}
	cout << result << endl;
	return 0;
}