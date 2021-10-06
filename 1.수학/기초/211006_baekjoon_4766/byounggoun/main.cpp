#include <iostream>

using namespace std;

int main(void) {
    cout << fixed;
    cout.precision(2);
    double before, after;
    cin >> before;
    for (;;)
    {
        cin >> after;
        if (after == 999)
        {
            break;
        }
        cout << after - before << endl;
        before = after;
    }
    return 0;
}
