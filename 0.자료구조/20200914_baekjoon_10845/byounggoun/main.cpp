#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class IntegerQueue
{
private:
	int num[10000];
	int length;
public:
	void push(int input)
	{
		num[this->length] = input;
		length++;
	}
	int pop()
	{
		if (length > 0)
		{
			int result = num[0];
			for (int i = 0; i < length; i++)
			{
				num[i] = num[i + 1];
			}
			length--;
			return result;
		}
		else
		{
			return -1;
		}

	}
	int size()
	{
		return length;
	}
	int empty()
	{
		if (length == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int front()
	{
		if (length > 0)
		{
			return num[0];
		}
		else
		{
			return -1;
		}
	}
	int back()
	{
		if (length > 0)
		{
			return num[length-1];
		}
		else
		{
			return -1;
		}
	}

	IntegerQueue()
	{
		this->length = 0;
	}
};


int main()
{
	IntegerQueue *queue = new IntegerQueue();
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		string input = "";
		cin >> input;
		if (input[1] == 'u')
		{
			string tmp;
			cin >> tmp;
			int push_num = stoi(tmp);
			queue->push(push_num);
		}
		else if (input[1] == 'o')
		{
			int tmp = queue->pop();
			cout << tmp << endl;
		}
		else if (input[1] == 'i')
		{
			int tmp = queue->size();
			cout << tmp << endl;
		}
		else if (input[1] == 'm')
		{
			int tmp = queue->empty();
			cout << tmp << endl;
		}
		else if (input[1] == 'r')
		{
			int tmp = queue->front();
			cout << tmp << endl;
		}
		else
		{
			int tmp = queue->back();
			cout << tmp << endl;
		}
	}
	return 0;
}