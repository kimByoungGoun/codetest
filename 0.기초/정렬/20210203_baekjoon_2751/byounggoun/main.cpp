#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int count;
	vector<int> v;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < count; i++)
	{
		cout << v.at(i) << '\n';
	}
	return 0;
}