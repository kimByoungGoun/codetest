#include <iostream>
#define endl "\n"
using namespace std;

void init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(void)
{
	init();
	int E, S, M;
	cin >> E >> S >> M;
	for (int i = 1;; i++)
	{
		if ((i - E) % 15 == 0 && (i - S) % 28 == 0 && (i - M) % 19 == 0)
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}

