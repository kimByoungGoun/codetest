#include <iostream>
#include <vector>
#include <string>>
using namespace std;

int main()
{
	vector<int> v;
	//
	int count = 0;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		string str;
		cin >> str;
		if (str.find("push") != string::npos)
		{
			string tmp;
			cin >> tmp;
			int pushnum = stoi(tmp);
			v.push_back(pushnum);
		}
		else if (str.find("pop") != string::npos)
		{
			if (v.size() <= 0)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << v.back() << endl;
				v.pop_back();
			}

		}
		else if (str.find("size") != string::npos)
		{
			cout << v.size() << endl;
		}
		else if (str.find("empty") != string::npos)
		{
			if (v.size() == 0)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
		else if (str.find("top") != string::npos)
		{
			if (v.size() <= 0)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << v.back() << endl;
			}
		}
	}

	return 0;
}