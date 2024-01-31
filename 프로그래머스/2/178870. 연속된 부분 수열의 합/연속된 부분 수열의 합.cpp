#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> ans(2); ans[1] = sequence.size();
    for (int sum = 0, l = 0, r = 0; r < sequence.size(); r++) {
        sum += sequence[r];
        if (sum == k && r - l < ans[1] - ans[0])
            ans[0] = l, ans[1] = r;
        while (l < r && sum > k)
            sum -= sequence[l++];
        if (sum == k && r - l < ans[1] - ans[0])
            ans[0] = l, ans[1] = r;
    }
    return ans;
}