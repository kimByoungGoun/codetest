#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> alphabets;
string input;
int init()
{
    alphabets.push_back("c=");
    alphabets.push_back("c-");
    alphabets.push_back("dz=");
    alphabets.push_back("d-");
    alphabets.push_back("lj");
    alphabets.push_back("nj");
    alphabets.push_back("s=");
    alphabets.push_back("z=");
    return 0;
}

int main(void) {
    init();

    cin >> input;
    int length = input.length();
    int result = length;
    for (int i = 0; i < length; i++) {
        
        for (int j = 0; j < alphabets.size(); j++)
        {
            if (i + alphabets[j].size() <= length)
            {
                string target = input.substr(i, alphabets[j].size());
                if ((alphabets[j].compare(target)) == 0)
                {
                    result = result - (alphabets[j].size()-1);
                    i = i + (alphabets[j].size() - 1);
                }
            }
            else
            {
                continue;
            }
        }

    }
    cout << result << endl;

    return 0;
}
