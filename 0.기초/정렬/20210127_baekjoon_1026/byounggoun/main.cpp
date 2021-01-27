#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b)
{
	return a > b;
}

int main() {

	int count;
	int a[50];
	int b[50];
	int result = 0;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < count; i++)
	{
		cin >> b[i];
	}
	sort(a, a + count);
	sort(b,b+count, desc);

	for (int i = 0; i < count; i++)
	{
		result = result + (a[i] * b[i]);
	}
	cout << result << endl;
	return 0;
}