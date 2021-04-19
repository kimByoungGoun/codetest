#include <iostream>
using namespace std;

int main(void)
{
	int result;
	double x[3], y[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
	}
	double outer_product = (x[0]*y[1] - x[1] * y[0] + x[1] * y[2] - x[2] * y[1] + x[2] * y[0] - x[0] * y[2]) / 2;
	if (outer_product == 0)
	{
		result = 0;
	}
	else if (outer_product < 0)
	{
		result = -1;
	}
	else
	{
		result = 1;
	}
	cout << result << endl;
	return 0;
}