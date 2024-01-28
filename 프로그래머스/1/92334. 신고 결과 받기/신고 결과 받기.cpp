#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    unordered_map<string, int> indexByID;
    for (int i = 0; i < id_list.size(); i++) indexByID[id_list[i]] = i;
    vector<vector<bool>> reported(id_list.size() + 1, vector<bool>(id_list.size() + 1));
    for (auto s : report) {
        stringstream ss(s);
        string by, bad; ss >> by >> bad;
        reported[indexByID[bad]][indexByID[by]] = true;
    }
    vector<int> ans(id_list.size());
    for (int i = 0; i < id_list.size(); i++) {
        const int cnt = count(reported[i].begin(), reported[i].end(), true);
        if (cnt < k) continue;
        for (int j = 0; j < id_list.size(); j++) {
            if (reported[i][j]) ++ans[j];
        }
    }
    return ans;
}