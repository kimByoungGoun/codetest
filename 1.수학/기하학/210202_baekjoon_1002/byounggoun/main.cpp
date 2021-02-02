#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int x1, y1, x2, y2, r1, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		long long distance_sqr = ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1));//distance between turret
		if ((x1 == x2) && (y1 == y2) && (r1 == r2))//same position, same distance to target - infinite target
		{
			cout << -1 << endl;
		}
		else if ((x1 == x2) && (y1 == y2) && (r1 != r2))//same position, different distance to target - zero target
		{
			cout << 0 << endl;
		}
		else if (distance_sqr > ((r1 + r2)*(r1 + r2)))//no point of contact from to circle of turret(outside)
		{
			cout << 0 << endl;
		}
		else if (distance_sqr < ((r1 - r2)*(r1 - r2)))//no point of contact from to circle of turret(inside)
		{
			cout << 0 << endl;
		}
		else if (distance_sqr == ((r1 + r2)*(r1 + r2)))//one point of contact from to circle of turret(outside)
		{
			cout << 1 << endl;
		}
		else if (distance_sqr == ((r1 - r2)*(r1 - r2)))//one point of contact from to circle of turret(inside)
		{
			cout << 1 << endl;
		}
		else//two point of contact from to circle of turret
		{
			cout << 2 << endl;
		}
	}
	return 0;
}