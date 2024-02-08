#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> topping) {
    unordered_map<int, int> m1, m2;
    for (const auto elem : topping) ++m2[elem];
    int ans = 0;
    for (const auto elem : topping) {
        ++m1[elem];
        if (--m2[elem] == 0) m2.erase(elem);
        if (m1.size() == m2.size())
            ++ans;
    }
    return ans;
}