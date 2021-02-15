#include <iostream>

using namespace std;

int chess[50][50];

int min(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}
int main()
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			char input;
			cin >> input;
			if (input == 'W')
			{
				chess[i][j] = 0;
			}
			else
			{
				chess[i][j] = 1;
			}
		}
	}

	
	int result = 9999;
	for (int i = 0; i < N - 7; i++)//�� �غ��� �ϴ� ��(����)
	{
		for (int j = 0; j < M - 7; j++)//�� �غ��� �ϴ� ��(����)
		{
			int white_start_count = 0;//�̹� �ǿ��� ������� ���� �� ��� ���ľ� �ϴ� Ƚ��
			for (int k = 0; k < 8; k++)//�� �� �õ� ������ ���� ����
			{
				for (int l = 0; l < 8; l++)//�� �� �õ� ������ ���� ����
				{
					if (chess[i + k][j + l] == (i + k + j + l)%2)
					{

					}
					else
					{
						white_start_count++;
					}
				}
			}
			result = min(result, white_start_count);
			int black_start_count = 0;//�̹� �ǿ��� ������� ���� �� ��� ���ľ� �ϴ� Ƚ��
			for (int k = 0; k < 8; k++)//�� �� �õ� ������ ���� ����
			{
				for (int l = 0; l < 8; l++)//�� �� �õ� ������ ���� ����
				{
					if (chess[i + k][j + l] == (i + k + j + l) % 2)
					{
						black_start_count++;
					}
					else
					{
					}
				}
			}
			result = min(result, black_start_count);
		}
	}
	cout << result << endl;
	return 0;
}