#include <iostream>
#include <string>

using namespace std;


int find_char(string input, string find)
{
	int result;
	result= input.find(find);
	if (result == string::npos)
	{
		return -1;
	}
	else
	{
		return result;
	}
}

int main(void)
{
	string checks[26];
	for (int i = 0; i < 26; i++)
	{
		checks[i] = char(97 + i);;
	}
	string input;
	cin >> input;
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", find_char(input, checks[i]));
	}

	return 0;
}