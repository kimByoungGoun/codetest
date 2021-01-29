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
	//0~9�� �̹� �����ϴ� ��
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
		//ť�� �ִ� ���Ҽ��� ������
		descendingNum = q.front();
		result = descendingNum;
		q.pop();
		//������ �ڸ� ���ڸ� Ȯ��
		lastNum = descendingNum % 10;
		//������ �ڸ� ���ں��� ���� ���ڵ��� �ٿ� ����
		for (int j = 0; j < lastNum; j++)
		{
			q.push(descendingNum * 10 + j);
		}
	}
	cout << result << endl;

	return 0;

}
