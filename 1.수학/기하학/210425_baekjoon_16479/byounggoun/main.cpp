#include <iostream>
using namespace std;

int main(void)
{
	double K, D1, D2;
	cin >> K;
	cin >> D1 >> D2;
	double result = (K*K) - (((D1 - D2) / 2) * ((D1 - D2) / 2));
	cout << result << endl;
	return 0;
}