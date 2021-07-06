#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<pair<int, string> > menu;
string ord = "";
bool visited[20] = { 0, };
void DFS(string order, int cour, int size, int idx) {
    if (size == cour) {
        bool key = false;
        string str = ord;
        sort(str.begin(), str.end());
        for (int i = 0; i < menu.size(); i++) {
            if (menu[i].second == str) {
                menu[i].first = menu[i].first + 1;;
                key = true;
                
            }
        }
        if (!key) {
            menu.push_back({ 1,str });
        }
    }
    else {
        for (int j = idx; j < order.size(); j++) {
            if (!visited[j]) {
                visited[j] = true;
                ord += order[j];
               
                DFS(order, cour, size + 1, j+1);
                visited[j] = false;
                ord.pop_back();
            }
        }
    }
}
vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    for (int i = 0; i < course.size(); i++) {
        menu.clear();
        for (int j = 0; j < orders.size(); j++) {
            ord = "";
            if (course[i] <= orders[j].size())
                DFS(orders[j], course[i], 0, 0);
        }
        if (!menu.empty()) {
            sort(menu.begin(), menu.end());
            if (menu[menu.size() - 1].first > 1) {
                answer.push_back(menu[menu.size() - 1].second);
                for (int k = menu.size() - 2; k >= 0; k--) {
                    if (menu[menu.size() - 1].first == menu[k].first)    answer.push_back(menu[k].second);
                    else break;
                }
            }
        }

    }
    sort(answer.begin(), answer.end());
    return answer;
}