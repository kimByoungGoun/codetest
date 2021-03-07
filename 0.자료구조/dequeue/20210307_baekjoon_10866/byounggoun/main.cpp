#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(void)
{
	cin.tie(0);
	cin.sync_with_stdio(0);

	int count;
	string command = "";
	deque<int> q;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> command;
		if (command == "push_back")
		{
			int tmp;
			cin >> tmp;
			q.push_back(tmp);
		}
		else if (command == "push_front")
		{
			int tmp;
			cin >> tmp;
			q.push_front(tmp);
		}
		else if (command == "pop_front")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.front() << "\n";
				q.pop_front();
			}
		}
		else if (command == "pop_back")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.back() << "\n";
				q.pop_back();
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
				cout << q.front() << "\n";
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