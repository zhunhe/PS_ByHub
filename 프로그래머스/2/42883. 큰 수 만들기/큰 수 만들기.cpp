#include <bits/stdc++.h>
using namespace std;

string solution(string number, int k) {
    string ans = "";
    for (char c : number) {
        while (!ans.empty() && k && ans.back() < c)
            ans.pop_back(), --k;
        ans += c;
    }
    while (k--) ans.pop_back();
    return ans;
}