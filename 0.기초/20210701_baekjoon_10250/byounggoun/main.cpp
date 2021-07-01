#include <iostream>

using namespace std;

int main(void) {
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int H, W, target;
        cin >> H >> W >> target;
        int a = target % H;
        int b = target / H + 1;
        if (a == 0)
        {
            a = H;
            b = b - 1;
        }
        int result = a * 100 + b;
        cout << result << endl;
    }
    

    return 0;
}
