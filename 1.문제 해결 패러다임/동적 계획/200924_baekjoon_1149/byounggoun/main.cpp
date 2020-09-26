#include <iostream>

using namespace std;
int min(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int main(void) {
	int houses[2][3];
	houses[0][0] = 0;
	houses[0][1] = 0;
	houses[0][2] = 0;

	int house_count;
	cin >> house_count;
	for (int i = 0; i < house_count; i++)
	{
		cin >> houses[1][0] >> houses[1][1] >> houses[1][2];
		houses[1][0] = min(houses[0][1], houses[0][2]) + houses[1][0];
		houses[1][1] = min(houses[0][0], houses[0][2]) + houses[1][1];
		houses[1][2] = min(houses[0][0], houses[0][1]) + houses[1][2];

		houses[0][0] = houses[1][0];
		houses[0][1] = houses[1][1];
		houses[0][2] = houses[1][2];
	}
	cout << min(min(houses[1][0], houses[1][1]), houses[1][2]) << endl;


	return 0;
}