#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <iostream>
#include <algorithm>
using namespace std;


void binarySearch(int nums[], int length, int searchNum)
{
	int start = 0;
	int end = length-1;
	int mid;
	while(end - start >= 0)
	{

		mid = (start + end)/2;

		if (nums[mid] == searchNum)
		{
			printf("1\n");
			return;
		}
		else if (nums[mid] > searchNum)
		{
			end = mid-1;
		}
		else
		{
			start = mid+1;
		}

	}
	printf("0\n");
}


int main()
{
	int count;
	int nums[100000];
	scanf("%d",&count);
	for (int i = 0; i < count; i++)
	{
		scanf("%d", &nums[i]);
	}

	sort(nums, nums + count);

	
	int searchCount;
	scanf("%d", &searchCount);
	for (int i = 0; i < searchCount; i++)
	{
		int searchNum = 0;
		scanf("%d", &searchNum);
		binarySearch(nums, count, searchNum);

	}
	
	

	return 0;
}