#include <bits/stdc++.h>
using namespace std;

bool visited[100001];

vector<int> solution(vector<int> arr, int k) {
    vector<int> ans;
    for (const auto num : arr) {
        if (visited[num]) continue;
        ans.push_back(num);
        if (ans.size() == k) break;
        visited[num] = true;
    }
    while (ans.size() < k) ans.push_back(-1);
    return ans;
}