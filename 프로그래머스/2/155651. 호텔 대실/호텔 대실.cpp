#include <bits/stdc++.h>
using namespace std;

int conv(string t) {
    const int h = (t[0] - '0') * 10 + (t[1] - '0');
    const int m = (t[3] - '0') * 10 + (t[4] - '0');
    return h * 60 + m;
}

int solution(vector<vector<string>> book_time) {
    sort(book_time.begin(), book_time.end());
    priority_queue<int> pq;
    for (auto time : book_time) {
        const int s = conv(time[0]), e = conv(time[1]);
        if (!pq.empty() && -pq.top() <= s)
            pq.pop();
        pq.push(-(e + 10));
    }
    return pq.size();
}