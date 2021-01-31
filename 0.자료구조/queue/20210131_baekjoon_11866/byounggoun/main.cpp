#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	cin.tie(0);
	cin.sync_with_stdio(0);

	int count, jump;
	queue<int> q;
	queue<int> result;
	cin >> count >> jump;
	for (int i = 1; i <= count; i++)
	{
		q.push(i);
	}
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < jump-1; j++)
		{
			q.push(q.front());
			q.pop();
		}
		result.push(q.front());
		q.pop();
	}
	cout << "<" << result.front();
	result.pop();
	for (int i = 0; i < count-1; i++)
	{
		cout << ", " << result.front();
		result.pop();
	}
	cout << ">" << endl;
	return 0;
}
