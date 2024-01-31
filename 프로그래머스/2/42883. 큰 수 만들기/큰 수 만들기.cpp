#include <bits/stdc++.h>
using namespace std;

string solution(string number, int k) {
    string ans = "";
    for (const auto& c : number) {
        while (!ans.empty() && k > 0 && ans.back() < c)
            ans.pop_back(), --k;
        ans.push_back(c);
    }
    while (k > 0) ans.pop_back(), --k;
    return ans;
}