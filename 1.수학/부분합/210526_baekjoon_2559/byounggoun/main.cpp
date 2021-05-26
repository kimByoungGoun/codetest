#include <iostream>
using namespace std;

int nums[100001];
int main()
{

    int count, K;
    cin >> count >> K;
    nums[0] = 0;
    for (int i = 1; i < count+1; i++)
    {
        cin >> nums[i];
        nums[i] = nums[i] + nums[i-1];
    }
 
    int result = -100000;
    
    for (int i = 1; i < count - K + 2; i++)
    {
        int sum = 0;
        sum = nums[i + K - 1] - nums[i - 1];
        if (sum > result)
        {
            result = sum;
        }
    }
    cout << result << endl;
    return 0;
}
