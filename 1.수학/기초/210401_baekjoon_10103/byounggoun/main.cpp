#include <iostream>
using namespace std;

int main(void)
{
	int count;
	int a = 100;
	int b = 100;
	int tmp_a, tmp_b;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> tmp_a >> tmp_b;
		if (tmp_a > tmp_b)
		{
			b -= tmp_a;
		}
		else if (tmp_a < tmp_b)
		{
			a -= tmp_b;
		}
		else
		{

		}
	}
	cout << a << endl << b << endl;
	return 0;
}