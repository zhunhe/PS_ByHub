#include <bits/stdc++.h>
using namespace std;

int conv(string s) {
    const int h = stoi(s.substr(0, 2));
    const int m = stoi(s.substr(3, 2));
    return h * 60 + m;
}

int solution(vector<vector<string>> book_time) {
    sort(book_time.begin(), book_time.end());
    priority_queue<int> pq;
    int ans = 0;
    for (const auto& v : book_time) {
        const int s = conv(v[0]), e = conv(v[1]);
        if (!pq.empty() && -pq.top() + 10 <= s) pq.pop();
        pq.push(-e);
        ans = max(ans, (int)pq.size());
    }
    return ans;
}