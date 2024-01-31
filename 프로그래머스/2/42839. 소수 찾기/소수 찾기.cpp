#include <bits/stdc++.h>
using namespace std;

vector<int> nums;
set<int> st;
bool visited[10];

bool isPrime(long long n) {
    if (n == 2) return true;
    if (n < 2 || !(n & 1)) return false;
    for (long long i = 3; i <= sqrt(n); i += 2)
        if (!(n % i))
            return false;
    return true;
}

void dfs(int depth, int num) {
    if (isPrime(num)) st.insert(num);
    if (depth == nums.size()) return;
    for (int i = 0; i < nums.size(); i++) {
        if (visited[i]) continue;
        visited[i] = true;
        dfs(depth + 1, num * 10 + nums[i]);
        visited[i] = false;
    }
}

int solution(string numbers) {
    for (const auto& c : numbers) nums.push_back(c - '0');
    dfs(0, 0);
    return st.size();
}