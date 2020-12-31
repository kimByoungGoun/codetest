#include <iostream>
#include <string>
using namespace std;

int main()
{
	int first, second;
	cin >> first >> second;
	int result;

	int a, b, c;
	a = first / 100;
	b = (first % 100) / 10;
	c = (first % 10);
	int first_result = (c * 100) + (b * 10) + a;

	a = second / 100;
	b = (second % 100) / 10;
	c = (second % 10);
	int second_result = (c * 100) + (b * 10) + a;
	if (first_result > second_result)
	{
		result = first_result;
	}
	else
	{
		result = second_result;
		
	}

	cout << result << endl;
	return 0;
}

