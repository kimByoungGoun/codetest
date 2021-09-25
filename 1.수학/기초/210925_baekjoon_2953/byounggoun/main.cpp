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
	int a,b,c,d;
	
	int max = 0;
	int result,rank;
	for (int i = 0;i < 5; i++)
	{
		cin >> a >> b >> c >> d;
		if (a + b + c + d > max)
		{
			max = a + b + c + d;
			rank = i + 1;
			result = max;
		}
	}
	cout << rank << " " << result << endl;
	return 0;
}

