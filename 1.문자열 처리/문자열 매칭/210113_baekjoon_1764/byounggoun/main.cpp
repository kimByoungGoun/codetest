#include <iostream>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
	int listen_count;
	int sow_count;
	vector<string> listen;
	vector<string> results;

	
	cin >> listen_count >> sow_count;
	listen.resize(listen_count);
	for (int i = 0; i < listen_count; i++)
	{
		cin >> listen[i];
	}
	sort(listen.begin(), listen.end());

	string str;
	for (int j = 0; j < sow_count; j++) {
		cin >> str;

		if (binary_search(listen.begin(), listen.end(), str)) {
			results.push_back(str);
		}
	}
	sort(results.begin(), results.end());

	cout << results.size() << endl;
	for (int i = 0; i < results.size(); i++)
	{
		cout << results[i] << endl;
	}

	return 0;
}

