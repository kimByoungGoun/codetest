#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(void)
{
	cin.tie(0);
	cin.sync_with_stdio(0);

	int count;
	string command = "";
	queue<int> q;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> command;
		if (command == "push")
		{
			int tmp;
			cin >> tmp;
			q.push(tmp);
		}
		else if (command == "pop")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (command == "size")
		{
			cout << q.size() << "\n";
		}
		else if (command == "empty")
		{
			if (q.empty())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (command == "front")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout <<q.front() << "\n";
			}
		}
		else if (command == "back")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.back() << "\n";
			}
		}
	}

	return 0;
}
