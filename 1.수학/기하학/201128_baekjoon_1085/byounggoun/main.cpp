#include <iostream>

using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int result = 1000;
	if (w - x < result)
	{
		result = w - x;
	}
	if (x < result)
	{
		result = x;
	}
	if (h - y < result)
	{
		result = h - y;
	}
	if (y < result)
	{
		result = y;
	}
	cout << result << endl;
	return 0;
}