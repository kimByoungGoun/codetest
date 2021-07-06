#include <string>
#include <vector>
#include <cmath>
using namespace std;
long long f(long long input)
{
    long long tmp = input;
    long long result;
    for(int i = 0;;i++)
    {
        if((tmp%2) == 0 )
        {
            if(i == 0)
            {
                result = input + pow(2,i);
                break;
            }
            else
            {
                result = input + pow(2,i) - pow(2,i-1);
                break;
            }
        }
        else
        {
            tmp = (tmp - 1)/2;
        }
        if(tmp <= 0)
        {
            result = input + pow(2,i+1) - pow(2,i);

            break;
        }
    }
    return result;
}
vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    for(int i = 0; i < numbers.size(); i++)
    {
        answer.push_back(f(numbers[i]));
    }
    return answer;
}