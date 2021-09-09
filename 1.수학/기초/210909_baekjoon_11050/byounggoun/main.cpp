#include <iostream>

using namespace std;

int main(void) {
    int N, K, result = 1;
    cin >> N >> K;
    for (int i = 0; i < K; i++)
    {
        result = result * (N - i);
    }
    for (int i = 0; i < K; i++)
    {
        result = result / (K - i);
    }
    cout << result << endl;
    return 0;
}
