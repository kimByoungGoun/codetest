#include <iostream>

using namespace std;

bool is_prime(int input)
{
    if (input == 2)
    {
        return true;
    }
    for (int i = 2; i <= input / 2; i++)
    {
        if (input % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(void) {
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int num, a, b;
        cin >> num;

        a = num / 2;
        b = num / 2;


        for (;;)
        {
            if (is_prime(a)&& is_prime(b))
            {
                break;
            }
            else
            {
                a = a - 1;
                b = b + 1;
            }

        }
        cout << a << " " << b << endl;
    }
    

    return 0;
}
