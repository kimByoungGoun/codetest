#include <iostream>

using namespace std;

int main(void) {
    int input, a,b,c;
    cin >> input;
    a = input / 300;
    input = input % 300;
    
    b = input / 60;
    input = input % 60;

    c = input / 10;
    input = input % 10;
    if (input != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
