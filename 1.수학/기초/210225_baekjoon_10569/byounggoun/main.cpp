#include <iostream>
using namespace std;

int main()
{
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int V, E;
		cin >> V >> E;
		cout << 2 - V + E << endl;
	}

	return 0;
}