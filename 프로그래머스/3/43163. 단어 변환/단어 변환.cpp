#include <bits/stdc++.h>
using namespace std;

vector<int> adj[51];

int diff(string a, string b) {
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            ++cnt;
    return cnt;
}

int solution(string begin, string target, vector<string> words) {
    unordered_map<string, int> m;
    m[begin] = 0;
    for (const auto& s : words) {
        if (m.find(s) == m.end())
            m[s] = m.size();
    }
    for (int i = 0; i < words.size(); i++) {
        if (diff(begin, words[i]) != 1) continue;
        adj[0].push_back(m[words[i]]);
        adj[m[words[i]]].push_back(0);
    }
    for (int i = 0; i < words.size(); i++) {
        for (int j = i + 1; j < words.size(); j++) {
            if (diff(words[i], words[j]) != 1) continue;
            adj[m[words[i]]].push_back(m[words[j]]);
            adj[m[words[j]]].push_back(m[words[i]]);
        }
    }
    vector<int> dist(m.size());
    dist[m[begin]] = 1;
    queue<int> q;
    q.push(m[begin]);
    while (!q.empty()) {
        const auto now = q.front(); q.pop();
        if (now == m[target])
            return dist[m[target]] - 1;
        for (const auto next : adj[now]) {
            if (dist[next]) continue;
            dist[next] = dist[now] + 1;
            q.push(next);
        }
    }
    return 0;
}