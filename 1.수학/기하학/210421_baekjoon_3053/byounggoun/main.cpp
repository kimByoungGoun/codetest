#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	double R;
	cin >> R;


	double result = R * R * M_PI;
	result = round(result * 1000000);
	result = result / 1000000;
	cout << fixed;
	cout.precision(6);
	cout << result << endl;

	result = R*R*2;
	result = round(result * 1000000);
	result = result / 1000000;
	cout << fixed;
	cout.precision(6);
	cout << result << endl;
	return 0;
}