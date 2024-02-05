#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> rooms(n);    // start_time, end_time
    for (auto& elem : rooms) cin >> elem.first >> elem.second;
    sort(rooms.begin(), rooms.end(), [](auto lhs, auto rhs) {
        if (lhs.first == rhs.first)
            return lhs.second < rhs.second;
        return lhs.first < rhs.first;
    });
    int ans = 0;
    priority_queue<int> pq;    // end_time;
    for (const auto room : rooms) {
        if (!pq.empty() && -pq.top() <= room.first)
            pq.pop();
        pq.push(-room.second);
        ans = max(ans, (int)pq.size());
    }
    cout << ans;
}