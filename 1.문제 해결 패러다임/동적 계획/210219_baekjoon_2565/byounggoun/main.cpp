#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int get_max(int a, int b) { return a > b ? a : b; }

bool comp(vector<int> &a, vector<int> &b) {
	return a[0] < b[0];
}
int main()
{
	int count;
	cin >> count;
	vector<vector<int>> v(count);
	int lis[100];
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		v[i] = vector<int>(2);
		cin >> v[i][0] >> v[i][1];
	}
	sort(v.begin(), v.end(), comp);

	for (int i = 0; i < count; i++) {
		lis[i] = 1;
		for (int j = 0; j < i; j++) {
			if (lis[j] + 1 > lis[i] && v[i][1] > v[j][1]) lis[i] = lis[j] + 1;
		}
		result = get_max(result, lis[i]);
	}
	cout << count - result << endl;
	return 0;
}