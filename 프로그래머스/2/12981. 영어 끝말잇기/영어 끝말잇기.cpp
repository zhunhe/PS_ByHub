#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    unordered_map<string, bool> m;
    string last = string(1, words[0].front());
    for (int i = 0; i < words.size(); i++) {
        if (last.back() != words[i].front() || m.find(words[i]) != m.end())
            return {i % n + 1, i / n + 1};
        m[words[i]] = true;
        last = words[i];
    }
    return {0, 0};
}