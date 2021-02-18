#include <iostream>
#include <string>
using namespace std;



int main()
{
	string input;
	cin >> input;
	int alpabet[26] = { 0, };
	for (int i = 0; i < input.length(); i++)
	{
		char tmp = input.at(i);
		alpabet[tmp - 97] += 1;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << alpabet[i] << ' ';
	}
	cout << endl;
	return 0;
}