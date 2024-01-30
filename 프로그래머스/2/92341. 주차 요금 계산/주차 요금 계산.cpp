#include <bits/stdc++.h>
using namespace std;

vector<int> record[10000];

vector<int> solution(vector<int> fees, vector<string> records) {
    for (auto s : records) {
        stringstream ss(s);
        string t; int car; string type;
        ss >> t >> car >> type;
        const int min = stoi(t.substr(0, 2)) * 60 + stoi(t.substr(3, 2));
        record[car].push_back(type == "IN" ? -min : min);
    }
    vector<int> ans;
    for (int i = 0; i < 10000; i++) {
        if (record[i].empty()) continue;
        if (record[i].size() & 1) record[i].push_back(23 * 60 + 59);
        const int min = reduce(record[i].begin(), record[i].end());
        int fee = fees[1];
        if (min > fees[0]) fee += (min - fees[0] + fees[2] - 1) / fees[2] * fees[3];
        ans.push_back(fee);
    }
    return ans;
}