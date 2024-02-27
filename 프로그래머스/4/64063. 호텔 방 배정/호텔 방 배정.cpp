#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, long long> m;

long long find(long long n) {
    if (m.find(n) == m.end())
        return n;
    return m[n] = find(m[n]);
}

vector<long long> solution(long long k, vector<long long> room_number) {
    vector<long long> ans;
    for (const auto n : room_number) {
        long long next = find(n);
        ans.push_back(next);
        m[next] = find(next + 1);
    }
    return ans;
}