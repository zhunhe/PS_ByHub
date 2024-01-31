#include <bits/stdc++.h>
using namespace std;

int calDiff(string a, string b) {
    int diff = 0;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i]) ++diff;
    return diff;
}

int solution(string begin, string target, vector<string> words) {
    unordered_map<string, bool> visited;
    queue<pair<string, int>> q;
    q.push({begin, 0});
    while (!q.empty()) {
        const auto [now, cnt] = q.front(); q.pop();
        if (now == target)
            return cnt;
        for (const auto& word : words) {
            if (calDiff(word, now) != 1) continue;
            if (visited.find(word) != visited.end()) continue;
            visited[word] = true;
            q.push({word, cnt + 1});
        }
    }
    return 0;
}