#include <bits/stdc++.h>
using namespace std;

#define all(x)  (x).begin(), (x).end()

int conv(string t) {
    const int h = (t[0] - '0') * 10 + (t[1] - '0');
    const int m = (t[3] - '0') * 10 + (t[4] - '0');
    return h * 60 + m;
}

bool compare(const vector<string>& lhs, const vector<string>& rhs) {
    if (lhs[0] == rhs[0])
        return lhs[1] < rhs[1];
    return lhs[0] < rhs[0];
}

int solution(vector<vector<string>> book_time) {
    sort(all(book_time), compare);
    priority_queue<int> pq;
    for (auto time : book_time) {
        const int s = conv(time[0]);
        const int e = conv(time[1]);
        if (!pq.empty() && -pq.top() <= s)
            pq.pop();
        pq.push(-(e + 10));
    }
    return pq.size();
}