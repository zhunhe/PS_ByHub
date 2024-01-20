#include <bits/stdc++.h>
using namespace std;

string s;
set<int> st;
bool visited[7];

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void dfs(string tmp) {
    if (!tmp.empty() && isPrime(stoi(tmp)))
        st.insert(stoi(tmp));
    if (tmp.size() == s.size())
        return;
    for (int i = 0; i < s.size(); i++) {
        if (visited[i]) continue;
        visited[i] = true;
        dfs(tmp + s[i]);
        visited[i] = false;
    }
}

int solution(string numbers) {
    s = numbers;
    dfs("");
    return st.size();
}