#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    vector<string> ans;
    for (int i = 0; i < finished.size(); i++)
        if (!finished[i])
            ans.push_back(todo_list[i]);
    return ans;
}