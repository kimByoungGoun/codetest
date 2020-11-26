#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	int result = 1;
	for (int i = 1; i < num; i++)
	{
		result = result * (i + 1);
	}
	cout << result << endl;
	return 0;
}