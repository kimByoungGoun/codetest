#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.sync_with_stdio(false);
	int a, b, count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> a >> b;
		cout <<  a + b << '\n';
	}
	return 0;
}