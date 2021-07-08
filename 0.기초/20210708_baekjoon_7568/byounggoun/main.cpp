#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int count;
    cin >> count;
    vector <pair<int, int>> people;
    vector <int> result;
    for (int i = 0; i < count; i++)
    {
        pair<int, int> input;
        cin >> input.first >> input.second;
        people.push_back(input);
    }
    for (int i = 0; i < count; i++)
    {
        int tmp = 0;
        for (int j = 0; j < count; j++)
        {
            if (j == i)
            {
                continue;
            }
            else
            {
                if (people[i].first < people[j].first && people[i].second < people[j].second)
                {
                    tmp++;
                }
            }
        }
        result.push_back(tmp + 1);
    }
    for (int i = 0; i < count; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
