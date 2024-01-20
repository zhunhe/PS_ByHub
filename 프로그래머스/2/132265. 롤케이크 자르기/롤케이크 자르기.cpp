#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> topping) {
    unordered_map<int, int> m1, m2;
    ++m1[topping[0]];
    for (int i = 1; i < topping.size(); i++) ++m2[topping[i]];
    int ans = 0;
    for (int i = 1; i < topping.size(); i++) {
        ++m1[topping[i]];
        if ((--m2[topping[i]]) == 0) m2.erase(topping[i]);
        if (m1.size() == m2.size()) ++ans;
    }
    return ans;
}