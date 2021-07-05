#include <iostream>

using namespace std;

int main(void) {
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int A, B, result = 0, distance;
        cin >> A >> B;
        distance = B - A;
        for (int j = 0;; j++)
        {
            if (distance <= 0)
            {
                cout << j << endl;
                break;
            }
            distance = distance - ((j+2) / 2);

        }

    }
    

    return 0;
}
