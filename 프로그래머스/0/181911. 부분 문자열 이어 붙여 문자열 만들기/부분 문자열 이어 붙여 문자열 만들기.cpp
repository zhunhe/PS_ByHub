#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> v, vector<vector<int>> parts) {
    string ans = "";
    for (int i = 0; i < v.size(); i++)
        ans += v[i].substr(parts[i][0], parts[i][1] - parts[i][0] + 1);
    return ans;
}