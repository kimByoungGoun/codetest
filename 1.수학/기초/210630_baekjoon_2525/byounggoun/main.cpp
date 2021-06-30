#include <iostream>

using namespace std;

int main()
{
    int hour, min, add;
    cin >> hour >> min;
    cin >> add;
    min += add;
    if (min >= 60)
    {
        hour += (min / 60);
        min = min % 60;
    }
    if (hour >= 24)
    {
        hour = hour % 24;
    }
    cout << hour << " " << min << endl;
    return 0;
}