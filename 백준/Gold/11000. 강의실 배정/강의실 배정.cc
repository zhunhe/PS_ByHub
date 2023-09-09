#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

struct Data {
    int startTime, endTime;
};

bool compare(const Data& lhs, const Data& rhs) {
    if (lhs.startTime == rhs.startTime)
        return lhs.endTime < rhs.endTime;
    return lhs.startTime < rhs.startTime;
}

int main() {
    FASTIO
    int n; cin >> n;
    vector<Data> timeTables(n);
    for (Data& elem : timeTables) cin >> elem.startTime >> elem.endTime;
    sort(timeTables.begin(), timeTables.end(), compare);
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (const Data& timeTable : timeTables) {
        if (!pq.empty() && pq.top() <= timeTable.startTime)
            pq.pop();
        else
            answer++;
        pq.push(timeTable.endTime);
    }
    cout << answer << '\n';
}