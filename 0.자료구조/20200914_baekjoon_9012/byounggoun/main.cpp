#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int left = 0;
		string input = "";
		cin >> input;
		for (int j = 0; j < input.length(); j++)
		{
			if (input[j] == '(')
			{
				left = left + 1;
			}
			else
			{
				left = left - 1;
			}
			if (left < 0)//�ѹ��̶� )�� (���� �������� ������ ������ �´��� ¦�� �ȸ´� ��
			{
				cout << "NO" << endl;
				break;
			}
		}
		if (left == 0)
		{
			cout << "YES" << endl;
		}
		else if(left >= 0)
		{
			cout << "NO" << endl;
		}
		else//left<0���� ó���� �κ�
		{

		}
	}

	return 0;
}