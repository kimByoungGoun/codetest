#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int len;
	int iter;
	cin >> len >> iter;
	int current = 0;
	vector<int> nums(len);
	vector<int>::iterator iterator;
	vector<int> result;

	for (int i = 0; i < len; i++)
	{
		nums[i] = i+1;
	}
	int remain_len = len;
	for (int i = 0; i < remain_len;)
	{
		current -= 1;
		iterator = nums.begin();
		current = current + iter;
		for (;;)
		{
			if (current >= remain_len)
			{
				current = current - remain_len;
			}
			else
			{
				break;
			}
		}

		result.push_back(nums[current]);
		iterator += current;
		nums.erase(iterator);
		remain_len = remain_len - 1;
	}
	cout << "<";
	for (int i = 0; i < len-1;i++)
	{
		cout << result[i] << ", ";
	}
	cout << result[len - 1] << ">";
	
	return 0;
}

