#include <iostream>
using namespace std;

int main(void)
{
	int count;
	cin >> count;
	for (int i = 1;; i++)
	{
		count = count - i;
		if (count <= 0)
		{
			int pase = i + 1;
			count = count + i;
			if (pase % 2 == 1)
			{
				cout << count << "/" << pase - count << endl;
				break;
			}
			else
			{
				cout << pase - count << "/" << count << endl;
				break;
			}
		}
	}

	return 0;
}