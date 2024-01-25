#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> ans;
    for (int i = 0; i < names.size(); i += 5)
        ans.push_back(names[i]);
    return ans;
}