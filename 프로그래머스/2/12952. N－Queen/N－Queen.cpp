#include <bits/stdc++.h>
using namespace std;

int ans, len, pos[12];

bool isValid(int depth) {
    for (int i = 0; i < depth; i++) {
        if (pos[i] == pos[depth]) return false;
        if (depth - i == abs(pos[depth] - pos[i])) return false;
    }
    return true;
}

void dfs(int depth) {
    if (depth == len) {
        ++ans;
        return;
    }
    for (int i = 0; i < len; i++) {
        pos[depth] = i;
        if (isValid(depth))
            dfs(depth + 1);
    }
}

int solution(int n) {
    len = n;
    dfs(0);
    return ans;
}