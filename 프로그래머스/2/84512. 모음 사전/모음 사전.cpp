#include <bits/stdc++.h>
using namespace std;

string charset[6] = {"", "A", "E", "I", "O", "U"};
set<string> words;

void dfs(int depth, string s) {
    if (depth == 5) {
        words.insert(s);
        return;
    }
    for (int i = 0; i < 6; i++)
        dfs(depth + 1, s + charset[i]);
}

int solution(string word) {
    dfs(0, "");
    int idx = 0;
    for (string elem : words) {
        if (word == elem)
            return idx;
        ++idx;
    }
    return 0;
}