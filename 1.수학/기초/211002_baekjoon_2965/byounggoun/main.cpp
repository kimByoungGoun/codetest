#include <iostream>
#define endl "\n"
using namespace std;

void init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int max(int a, int b)
{
	if (a < b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int main(void)
{
	init();
	int  a,b,c;
	cin >> a >> b >> c;
	int num1 = b - a;
	int num2 = c - b;

	cout << max(num1, num2)-1 << endl;
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