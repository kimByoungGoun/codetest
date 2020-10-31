#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int count;
	cin >> count;
	vector<int> v(count);
	int max_num = 0;
	for (int i = 0; i < count; i++)
	{
		string tmp;
		std::getline(std::cin, tmp, ' ');
		v[i] = stoi(tmp);
		if (max_num < v[i])
		{
			max_num = v[i];
		}
	}
	double result = 0;
	for (int i = 0; i < count; i++)
	{
		result = result + v[i];
	}
	result = ((result / max_num) * 100) / count;
	cout << result << endl;
	return 0;
}