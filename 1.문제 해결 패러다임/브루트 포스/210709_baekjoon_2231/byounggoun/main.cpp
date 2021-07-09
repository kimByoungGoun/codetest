#include <iostream>

using namespace std;

int main(void) {
    int num, result;
    cin >> num;
    for (int i = 1;; i++)
    {
        if (i > num)
        {
            result = 0;
            break;
        }

        int tmp = i;
        int tmp_result = i;
        for (;;)
        {
            tmp_result = tmp_result + (tmp % 10);
            tmp = tmp / 10;
            if (tmp <= 0)
            {
                break;
            }
        }
        if (num == tmp_result)
        {
            result = i;
            break;
        }
    }
    cout << result << endl;
    return 0;
}
