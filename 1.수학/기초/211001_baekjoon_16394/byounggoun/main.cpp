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
	int N;
	cin >> N;
	cout << N - 1946 << endl;
	return 0;
}

/*
int N,M,K;
cin >> N >> M >> K;
int i;
for (i = 0;;)
{
	if (N <= 0 || M <= 0)
	{
		break;
	}
	else
	{
		N = N - 2;
		M = M - 1;
		i++;
	}

	if (K > 0)
	{
		i--;
		K = K - 3;
	}

}
cout << i<< endl;*/