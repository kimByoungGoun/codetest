#include <iostream>
#include <map>
using namespace std;

bool checkUniquePos(int a, int b)
{
	map<int, int> data;
	while(a != 0)
	{
		data[a%10]++;
		a = a/10;
	}
	
	while(b != 0)
	{
		data[b%10]++;
		b = b/10;
	}
	
	if (data.size() != 10)
		return false;
	
	for (map<int,int>::iterator it = data.begin(); it != data.end(); it++)
		if (it->second != 1)
			return false;
	
	return true;
}

int main()
{
	bool spaceAnswer = false;
	while (true)
	{
		int N;
		cin >> N;
	
		if ( N == 0 )
		{
			break;
		}

        if(!spaceAnswer)
            spaceAnswer = true;
        else
            cout << endl;
		
		bool hasSolution = false;
		for (int fghij = 1234; fghij < 98765; fghij++)
		{
			int abcde = N * fghij;
			
			if (abcde > 98765)
				break;
			
			if (checkUniquePos( abcde < 10000? abcde * 10 : abcde,
								fghij < 10000? fghij * 10 : fghij ))
			{
				hasSolution = true;
				if (abcde < 10000)
					cout << "0" << abcde << " / " << fghij << " = " << N << endl;
				else if (fghij < 10000)
					cout << abcde << " / " << "0" << fghij << " = " << N << endl;
				else
					cout << abcde << " / " << fghij << " = " << N << endl;
			}
		}
		
		if (!hasSolution)
		{
			cout << "There are no solutions for " << N << "." << endl;
		}
	}
	
	return 0;
}
