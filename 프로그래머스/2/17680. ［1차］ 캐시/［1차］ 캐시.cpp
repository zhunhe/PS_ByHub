#include <bits/stdc++.h>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
    deque<string> cache;
    int ans = 0;
    for (auto s : cities) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        auto it = find(cache.begin(), cache.end(), s);
        if (it != cache.end()) {
            ++ans;
            cache.erase(it);
        } else {
            ans += 5;
            if (!cache.empty() && cache.size() == cacheSize) cache.pop_front();
        }
        if (cache.size() < cacheSize) cache.push_back(s);
    }
    return ans;
}