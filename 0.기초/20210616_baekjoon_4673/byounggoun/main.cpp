#include <iostream>
#define N 10001 

using namespace std;
bool arr[N];

int removeSelfNum(int n) {
    int sum = n;   
    while (1) {  

        if (n == 0)
        {
            break;
        }
        sum += n % 10;      
        n = n / 10;        

    }
    return sum;
}


int main(void) {

    for (int i = 1; i < N; i++) {
        int idx = removeSelfNum(i);

        if (idx <= N) {
            arr[idx] = true;
        }

    }

    for (int i = 1; i < N; i++) {
        if (arr[i] == false)
        {
           cout << i << endl;
        }
    }

    return 0;
}

