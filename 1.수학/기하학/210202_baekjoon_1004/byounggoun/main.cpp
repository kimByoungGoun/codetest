#include <iostream>

using namespace std;

bool is_inside(int dot_x, int dot_y, int circle_x, int circle_y, int r)
{
	int dist_sqr = ((dot_x - circle_x) * (dot_x - circle_x)) + ((dot_y - circle_y) * (dot_y - circle_y));
	if (dist_sqr > r*r)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int count;

	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int result = 0;
		int start_x, start_y, dest_x, dest_y;
		int circle_count;
		cin >> start_x >> start_y >> dest_x >> dest_y;
		cin >> circle_count;
		for (int j = 0; j < circle_count; j++)
		{
			int circle_x, circle_y,r;
			cin >> circle_x >> circle_y >> r;
			if (is_inside(start_x, start_y, circle_x, circle_y, r) && !is_inside(dest_x, dest_y, circle_x, circle_y, r))
			{
				result++;
			}
			else if (!is_inside(start_x, start_y, circle_x, circle_y, r) && is_inside(dest_x, dest_y, circle_x, circle_y, r))
			{
				result++;
			}
			else
			{
			}
		}
		cout << result << endl;
	}
	return 0;
}