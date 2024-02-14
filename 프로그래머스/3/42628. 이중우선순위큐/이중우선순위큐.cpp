#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> operations) {
    priority_queue<int> pq1;
    priority_queue<int, vector<int>, greater<int>> pq2;
    int cnt = 0;
    for (const auto& s : operations) {
        stringstream ss(s);
        string cmd; int number;
        ss >> cmd >> number;
        if (cmd == "I") {
            ++cnt;
            pq1.push(number);
            pq2.push(number);
        } else if (cnt) {
            --cnt;
            number == 1 ? pq1.pop() : pq2.pop();
        }
        if (cnt == 0) {
            while (!pq1.empty()) pq1.pop();
            while (!pq2.empty()) pq2.pop();
        }
    }
    if (cnt == 0)
        return {0, 0};
    return {pq1.top(), pq2.top()};
}