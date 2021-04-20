#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	double d1, d2;
	cin >> d1 >> d2;
	double result = (d1 * 2) + (2 * d2 * M_PI);
	result = round(result * 1000000);
	result = result / 1000000;
	cout << fixed;
	cout.precision(6);
	cout << result << endl;
	return 0;
}