#include <iostream>

using namespace std;

int main()
{
	int max_num = 0;
	int max_count = 0;
	int num;
	for (int i = 0; i < 9; i++)
	{
		cin >> num;
		if (num > max_num)
		{
			max_num = num;
			max_count = i + 1;
		}
	}
	cout << max_num << endl << max_count << endl;
	return 0;
}

/*
int main()
{
	int count;
	int result = 1;
	cin >> count;
	int nums = 1;
	int result_nums = 1;
	for (;count > 0;)
	{
		for (int i = 0; i < nums; i++)
		{
			count = count - 1;
			if (count == 0)
			{
				result = i + 1;
				result_nums = nums;
			}
		}
		nums++;
	}


	cout << result << "/" << result_nums << endl;
	return 0;
}
*/