#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define MAX 8

int n;
bool visited[MAX + 1];
vector<int> tmp;

void dfs(const int depth) {
    if (depth == n) {
        for (int i = 0; i < n; i++)
            cout << tmp[i] << " ";
        cout << "\n";
        return;
    }
    for (int i = 1; i < n + 1; i++) {
        if (visited[i]) continue;
        visited[i] = true;
        tmp.push_back(i);
        dfs(depth + 1);
        visited[i] = false;
        tmp.pop_back();
    }
}

int main() {
    FASTIO
    cin >> n;
    dfs(0);
}