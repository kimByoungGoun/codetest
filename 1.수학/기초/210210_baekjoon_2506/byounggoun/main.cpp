#include <iostream>
using namespace std;

int main()
{
    int count;
    int score = 0;
    int addscore = 1;
    cin >> count;
    for(int i = 0; i < count; i++)
    {
        int tmp;
        cin >> tmp;
        if(tmp == 0)
        {
            addscore = 1;
        }
        else
        {
            score = score + addscore;
            addscore++;
        }
    }
    cout << score << endl;
    return 0;
}