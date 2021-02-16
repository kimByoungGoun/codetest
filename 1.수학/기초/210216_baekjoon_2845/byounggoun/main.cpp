#include <iostream>

using namespace std;

int main()
{
	int a, b, people;
	cin >> a >> b;
	people = a * b;
	for (int i = 0; i < 5; i++)
	{
		int tmp;
		cin >> tmp;
		cout << tmp - people << ' ';
	}
	return 0;
}