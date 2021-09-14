#include <iostream>

using namespace std;

int main(void) {
    int a, b, result;
    
    for (;;)
    {
        result = 0;
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            break;
        }
        if (a > b)
        {
            if (a % b == 0)
            {
                cout << "multiple" << endl;
                result = 1;
            }
        }
        else
        {
            if (b % a == 0)
            {
                cout << "factor" << endl;
                result = 1;
            }
        }
        if (result == 0)
        {
            cout << "neither" << endl;
        }
    }
    return 0;
}
