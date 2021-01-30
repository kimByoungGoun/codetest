#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	int count;
	queue<int> q;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		q.push(i + 1);
	}
	for (;;)
	{
		if (q.size() == 1)
		{
			break;
		}
		q.pop();
		int tmp = q.front();
		q.push(tmp);
		q.pop();

		
	}
	cout << q.front() << endl;

	return 0;
}
