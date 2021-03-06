
#include "stdafx.h"
#include <iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int datas[10010], N, differents, MIN;

int main()
{
	int i, j, k;
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cin >> datas[i];
	}
	std::sort(1 + datas, 1 + N + datas);
	MIN = 5;
	if (N>5)
	{
		for (i = 0; i <= N - 5; i++)
		{
			for (j = 1; j <= 5; j++)
			{
				differents = 0;
				for (k = j - 1; k >= 1; k--)
				{
					if (datas[i + k] >= datas[i + j] - j + 1)
					{
						differents++;
					}
					else
					{
						break;
					}
				}
				for (k = j; k <= 5; k++)
				{
					if (datas[i + k] <= datas[i + j] + 5 - j)
					{
						differents++;
					}
					else
					{
						break;
					}
				}
				if (5 - differents<MIN)
				{
					MIN = 5 - differents;
				}
			}
		}
	}
	else
	{
		for (j = 1; j <= N; j++)
		{
			differents = 0;
			for (k = j - 1; k >= 1; k--)
			{
				if (datas[k] >= datas[j] - j + 1)
				{
					differents++;
				}
				else
				{
					break;
				}
			}
			for (k = j; k <= N; k++)
			{
				if (datas[k] <= datas[j] + 5 - j)
				{
					differents++;
				}
				else
				{
					break;
				}
			}
			if (5 - differents<MIN)
			{
				MIN = 5 - differents;
			}
		}
	}
	cout << MIN;
	return 0;
}