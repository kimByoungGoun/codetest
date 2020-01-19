/*
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int used[10] = {0,};

void isCorrect(vector<int> &tmp, vector<vector<int> > &result, int N)
{
	int numerator = 0;
	int denominator = 0;
	int pos_val;
	
	pos_val = 1;
	for (int i=9; i>4; i--)
	{
		numerator += (tmp.at(i) * pos_val);
		pos_val *= 10;
	}
	
	pos_val = 1;
	for (int i=4; i>=0; i--)
	{
		denominator += (tmp.at(i) * pos_val);
		pos_val *= 10;
	}
	
	if (denominator > numerator)
		return;
	
	if ( (numerator / denominator) == N  && (numerator % denominator) == 0 )
	{
		vector<int> sol;
		sol.push_back(numerator);
		sol.push_back(denominator);
		result.push_back(sol);
	}
}

void solve(vector<int> &tmp, vector<vector<int> > &result, int N)
{
	if (tmp.size() == 10)
	{
		isCorrect(tmp, result, N);
		return;
	}
	
	for (int i=0; i<10; i++)
	{
		if (!used[i])
		{
			used[i] = 1;
			tmp.push_back(i);
			solve(tmp, result, N);
			tmp.pop_back();
			used[i] = 0;
		}
	}
	
}

int main()
{
	while (true)
	{
		int N;
		cin >> N;
	
		if ( N == 0 )
		{
			break;
		}
		
		vector<vector<int> > result;
		vector<int> tmp;
		
		solve(tmp, result, N);
		
		if (result.size() == 0)
		{
			cout << "There are no solutions for " << N << endl;
		}
		else
		{
			for (int i=0; i < result.size(); i++)
			{
				cout << setw(5) << setfill('0') << result[i][0] << " / "
                << setw(5) << setfill('0') << result[i][1] << " = " << N << endl;
			}
		}
		
		cout << endl;
	}
}
*/

/*
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

void isCorrect(vector<int> &tmp, vector<int> &result, int N)
{
	int numerator = 0;
	int denominator = 0;
	int pos_val;
	
	if (tmp[0] > 4)
		return;
	
	pos_val = 1;
	for (int i=9; i>4; i--)
	{
		numerator += (tmp.at(i) * pos_val);
		pos_val *= 10;
	}
	
	pos_val = 1;
	for (int i=4; i>=0; i--)
	{
		denominator += (tmp.at(i) * pos_val);
		pos_val *= 10;
	}
	
	if (denominator > numerator)
		return;
	
	if ( denominator * N == numerator )
	{
		result.push_back(numerator);
		result.push_back(denominator);
	}
}

int main()
{
	while (true)
	{
		int N;
		cin >> N;
	
		if ( N == 0 )
		{
			break;
		}
		
		vector<int> origin;
		vector<int> result;
		for (int i=0; i<10; i++)
		{
			origin.push_back(i);
		}
		
		do{
			isCorrect(origin, result, N);
		}while(next_permutation(origin.begin(), origin.end()));
		
		if (result.size() == 0)
		{
			cout << "There are no solutions for " << N << "." << endl;
		}
		else
		{
			for (int i=0; i < result.size(); i += 2)
			{
				cout << setw(5) << setfill('0') << result[i] << " / "
                << setw(5) << setfill('0') << result[i+1] << " = " << N << endl;
			}
		}
		
		cout << endl;
	}
}
*/


/*
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int used[10] = {0,};

void isCorrect(vector<int> &tmp, vector<vector<int> > &result, int N)
{
	int numerator = 0;
	int denominator = 0;
	int pos_val;
	
	pos_val = 1;
	for (int i=9; i>4; i--)
	{
		numerator += (tmp.at(i) * pos_val);
		pos_val *= 10;
	}
	
	pos_val = 1;
	for (int i=4; i>=0; i--)
	{
		denominator += (tmp.at(i) * pos_val);
		pos_val *= 10;
	}
	
	if (denominator > numerator)
		return;
	
	if ( denominator * N == numerator )
	{
		vector<int> sol;
		sol.push_back(numerator);
		sol.push_back(denominator);
		result.push_back(sol);
	}
}

void solve(vector<int> &tmp, vector<vector<int> > &result, int N)
{
	if (tmp.size() == 10)
	{
		isCorrect(tmp, result, N);
		return;
	}
	
	if (tmp.size() == 1 && tmp[0] > 4)
	{
		return;
	}
	
	for (int i=0; i<10; i++)
	{
		if (!used[i])
		{
			used[i] = 1;
			tmp.push_back(i);
			solve(tmp, result, N);
			tmp.pop_back();
			used[i] = 0;
		}
	}
	
}

int main()
{
	while (true)
	{
		int N;
		cin >> N;
	
		if ( N == 0 )
		{
			break;
		}
	
		vector<vector<int> > result;
		vector<int> tmp;
		
		solve(tmp, result, N);
		
		if (result.size() == 0)
		{
			cout << "There are no solutions for " << N << "." << endl;
		}
		else
		{
			for (int i=0; i < result.size(); i++)
			{
				cout << setw(5) << setfill('0') << result[i][0] << " / "
                << setw(5) << setfill('0') << result[i][1] << " = " << N << endl;
			}
		}
		
		cout << endl;
	}
}
*/

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