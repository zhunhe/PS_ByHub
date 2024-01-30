#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> remain;
    for (int i = 0; i < speeds.size(); i++) remain.push_back((100 - progresses[i] + speeds[i] - 1) / speeds[i]);
    for (auto elem : remain) cout << elem << ' ';
    vector<int> ans;
    int day = remain[0]; int cnt = 0;
    for (auto elem : remain) {
        if (elem <= day) ++cnt;
        else {
            ans.push_back(cnt);
            cnt = 1;
            day = elem;
        }
    }
    if (cnt > 0) ans.push_back(cnt);
    return ans;
}