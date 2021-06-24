#include <iostream>

using namespace std;

bool check(int n) {  
    int diff;
    if (n < 10)
    {
        return true;
    }
    diff = ((n / 10) % 10) - (n % 10);
    n = n / 10;
    while (1) {  
        if (n < 10)
        {
            return true;
        }
        if (((n / 10) % 10) - (n % 10) != diff)
        {
            return false;
        }
        n = n / 10;

    }
}


int main(void) {
    int result = 0;
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        
        if (check(i) == true) {
            result++;
        }

    }
    cout << result << endl;

    return 0;
}

