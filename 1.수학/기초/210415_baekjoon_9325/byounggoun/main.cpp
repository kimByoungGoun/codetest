#include <iostream>
using namespace std;

int main(void)
{
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int s;
		cin >> s;
		int n;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			int a, b;
			cin >> a >> b;
			s = s + (a*b);
		}
		cout << s << endl;
	}
	return 0;
}