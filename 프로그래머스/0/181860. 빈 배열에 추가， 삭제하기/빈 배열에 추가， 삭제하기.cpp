#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> ans;
    for (int i = 0; i < flag.size(); i++) {
        flag[i] ? ans.insert(ans.end(), arr[i] << 1, arr[i])
                : ans.erase(ans.end() - arr[i], ans.end());
    }
    return ans;
}