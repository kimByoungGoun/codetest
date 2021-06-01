#include <iostream>
#include <algorithm>
using namespace std;

int loap[100001];
int max(int a, int b)
{
    if (a > b) { return a; }
    else { return b; }
}
int main()
{
    int count, result = 0;
    cin >> count;
     
    for (int i = 0; i < count; i++)
    {
        cin >> loap[i];
    }
    sort(loap, loap + count);
    for (int i = 0; i < count; i++)
    {
        result = max(result, loap[i] * (count - i));
    }
    cout << result << endl;
    return 0;
}
