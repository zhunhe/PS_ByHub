#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> cards) {
    for (auto& card : cards) --card;
    vector<bool> visited(cards.size());
    vector<int> ans;
    for (int i = 0; i < cards.size(); i++) {
        if (visited[i]) continue;
        visited[i] = true;
        int cnt = 1;
        queue<int> q;
        q.push(i);
        while (!q.empty()) {
            const auto now = q.front(); q.pop();
            const auto next = cards[now];
            if (visited[next]) continue;
            visited[next] = true;
            ++cnt;
            q.push(next);
        }
        ans.push_back(cnt);
    }
    sort(ans.rbegin(), ans.rend());
    if (ans.size() == 1)
        return 0;
    return ans[0] * ans[1];
}