#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    map<string, int> m;
    for (int i = 0; i < want.size(); i++) m[want[i]] = number[i];
    for (int i = 0; i < 9; i++)
        if (--m[discount[i]] == 0)
            m.erase(discount[i]);
    int ans = 0;
    for (int i = 9; i < discount.size(); i++) {
        if (--m[discount[i]] == 0)
            m.erase(discount[i]);
        if (m.empty())
            ++ans;
        if (++m[discount[i - 9]] == 0)
            m.erase(discount[i - 9]);
    }
    return ans;
}