
#include "stdafx.h"
#include <iostream>

using namespace std;

int main() 
{
	int tropies[50];
	int numOfTropies;
	cin >> numOfTropies;
	for (int inputIter = 0; inputIter < numOfTropies; inputIter++)
	{
		cin >> tropies[inputIter];
	}
	int blocker = 0;
	int result = 0;
	//from the first
	for (int lookIter = 0; lookIter < numOfTropies; lookIter++)
	{
		
		if (tropies[lookIter] > blocker)
		{
			result++;
			blocker = tropies[lookIter];
		}
		else
		{
			continue;
		}
	}
	cout << result << endl;
	blocker = 0;
	result = 0;
	//from the last
	for (int lookIter = numOfTropies-1; lookIter >= 0; lookIter--)
	{

		if (tropies[lookIter] > blocker)
		{
			result++;
			blocker = tropies[lookIter];
		}
		else
		{
			continue;
		}
	}
	cout << result << endl;
	return 0;
}
