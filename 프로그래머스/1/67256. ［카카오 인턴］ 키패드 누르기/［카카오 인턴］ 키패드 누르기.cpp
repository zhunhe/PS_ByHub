#include <bits/stdc++.h>
using namespace std;

unordered_map<char, pair<int, int>> pos = {
    {'1', {0, 0}}, {'2', {0, 1}}, {'3', {0, 2}},
    {'4', {1, 0}}, {'5', {1, 1}}, {'6', {1, 2}},
    {'7', {2, 0}}, {'8', {2, 1}}, {'9', {2, 2}},
    {'*', {3, 0}}, {'0', {3, 1}}, {'#', {3, 2}}
};

int distance(char now, char next) {
    auto [y1, x1] = pos[now];
    auto [y2, x2] = pos[next];
    return abs(y1 - y2) + abs(x1 - x2);
}

string solution(vector<int> numbers, string hand) {
    string ans = "";
    char left = '*', right = '#';
    for (auto now : numbers) {
        switch (now) {
            case 1: case 4: case 7: ans += "L"; left = now + '0'; break;
            case 3: case 6: case 9: ans += "R"; right = now + '0'; break;
            case 2: case 5: case 8: case 0:
                const int distLeft = distance(left, now + '0');
                const int distRight = distance(right, now + '0');
                if (distLeft < distRight) {
                    ans += "L"; left = now + '0';
                } else if (distLeft > distRight) {
                    ans += "R"; right = now + '0';
                } else if (hand == "left") {
                    ans += "L"; left = now + '0';
                } else {
                    ans += "R"; right = now + '0';
                }
                break;
        }
    }
    return ans;
}