#include <iostream>
#include <vector>

using namespace std;

int main() {
	int count;
	int result = 0;
	int tmp;
	vector <int> nums;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> tmp;
		if (tmp != 0)
		{
			nums.push_back(tmp);
		}
		else
		{
			nums.pop_back();
		}
		
	}
	for (int i = 0; i < nums.size(); i++)
	{
		result = result + nums.at(i);
	}
	cout << result << endl;
	return 0;
}