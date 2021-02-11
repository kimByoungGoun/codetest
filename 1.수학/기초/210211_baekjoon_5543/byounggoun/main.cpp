#include <iostream>
using namespace std;

int min(int a, int b, int c)
{
    if(a < b)
    {
        if(a < c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b < c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int min(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    int a, b, c;
    int x,y;
    cin >> a >> b >> c >> x >> y;
    cout << min(a,b,c) + min(x,y) - 50 << endl;
    return 0;
}