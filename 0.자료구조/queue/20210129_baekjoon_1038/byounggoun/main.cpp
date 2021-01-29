#include <iostream>
#include <queue>
using namespace std;

queue<long long> q;


int main(void)

{
	int num;
	cin >> num;
	long long result = 0;
	long long descendingNum;
	int lastNum;
	//0~9는 이미 감소하는 수
	for (int i = 1; i <= 9; i++)
	{
		q.push(i);
	}

	for (int i = 0; i < num; i++)
	{
		if (q.empty())
		{
			result = -1;
			break;
		}
		//큐에 있는 감소수를 꺼내서
		descendingNum = q.front();
		result = descendingNum;
		q.pop();
		//마지막 자리 숫자를 확인
		lastNum = descendingNum % 10;
		//마지막 자리 숫자보다 작은 숫자들을 붙여 나감
		for (int j = 0; j < lastNum; j++)
		{
			q.push(descendingNum * 10 + j);
		}
	}
	cout << result << endl;

	return 0;

}
