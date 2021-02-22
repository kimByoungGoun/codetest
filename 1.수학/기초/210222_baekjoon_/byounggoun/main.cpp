#include <iostream>
using namespace std;


int main()
{
	int N, M;
	long long result = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		result += tmp;
	}
	for (int i = 0; i < M; i++)
	{
		int tmp;
		cin >> tmp;
		result += tmp;
	}
	cout << result << endl;
	return 0;
}