#include <iostream>
#include <vector>
#define divider 10007

using namespace std;

int main() {
	int count;
	cin >> count;
	vector<int> before(10, 1);
	vector<int> after(10);
	after.assign(before.begin(), before.end());
	for (int i = 1; i < count; i++)
	{
		for (int j = 0; j< 10; j++)
		{
			int tmp = 0;
			for (int k = j; k < 10; k++)
			{
				tmp = (tmp + before[k])%divider;
			}
			after[j] = tmp;
		}
		before.assign(after.begin(), after.end());
	}
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		result = (result + after[i])%divider;
	}
	cout << result << endl;
	return 0;
}