#include <bits/stdc++.h>
using namespace std;

vector<string> v[8], tmp;
int len;
set<string> ans;

bool check(const string& user, const string& banned) {
    if (user.size() != banned.size()) return false;
    for (int i = 0; i < banned.size(); i++)
        if (banned[i] != '*' && banned[i] != user[i])
            return false;
    return true;
}

void dfs(int depth) {
    if (depth == len) {
        set<string> st(tmp.begin(), tmp.end());
        if (st.size() == len)
            ans.insert(reduce(st.begin(), st.end(), string("")));
        return;
    }
    for (int i = 0; i < v[depth].size(); i++) {
        tmp.push_back(v[depth][i]);
        dfs(depth + 1);
        tmp.pop_back();
    }
}

int solution(vector<string> user_id, vector<string> banned_id) {
    for (int i = 0; i < banned_id.size(); i++)
        for (const auto& user : user_id)
            if (check(user, banned_id[i]))
                v[i].push_back(user);
    len = banned_id.size();
    dfs(0);
    return ans.size();
}