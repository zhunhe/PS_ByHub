#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> food) {
    string s = "";
    for (int i = 0; i < food.size(); i++) {
        if (food[i] == 1) continue;
        s += string(food[i] >> 1, i + '0');
    }
    return s + "0" + string(s.rbegin(), s.rend());
}