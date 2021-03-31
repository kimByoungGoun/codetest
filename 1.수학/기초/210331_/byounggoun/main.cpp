#include <iostream>
using namespace std;

int main(void)
{
	int K, N, M;
	cin >> K >> N >> M;
	int result = (K * N) - M;
	if (result <= 0)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << result << endl;
	}

	return 0;
}