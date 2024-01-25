#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> numLog) {
    unordered_map<int, char> m = {{1, 'w'}, {-1, 's'}, {10, 'd'}, {-10, 'a'}};
    string ans = "";
    for (int i = 1; i < numLog.size(); i++)
        ans += m[numLog[i] - numLog[i - 1]];
    return ans;
}