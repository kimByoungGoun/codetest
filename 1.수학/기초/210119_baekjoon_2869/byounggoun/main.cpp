#include <iostream>
using namespace std;

int main()
{
	int a, b, v;
	cin >> a >> b >> v;
	int result;
	result = ((v - b - 1) / (a - b)) + 1;

	cout << result;
	return 0;
}

