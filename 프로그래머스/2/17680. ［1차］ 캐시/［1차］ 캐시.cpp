#include <bits/stdc++.h>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
    if (cacheSize == 0) return cities.size() * 5;
    deque<string> dq;
    int ans = 0;

    for (auto city : cities) {
        transform(city.begin(), city.end(), city.begin(), ::toupper);

        if (dq.empty()) {
            ans += 5;
            dq.push_back(city);
            continue;
        }
        auto it = find(dq.begin(), dq.end(), city);
        if (it == dq.end()) {
            ans += 5;
            if (dq.size() == cacheSize)
                dq.pop_front();
            dq.push_back(city);
        } else {
            ++ans;
            dq.erase(it);
            dq.push_back(city);
        }
    }
    return ans;
}