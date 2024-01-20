#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> seq, int k) {
    long long len = seq.size() + 1, sum = 0;
    vector<int> ans(2);
    for (int r = 0, l = 0; r < seq.size(); r++) {
        sum += seq[r];
        while (l < r && sum > k) sum -= seq[l++];
        if (sum == k && r - l + 1 < len)
            ans = {l, r}, len = r - l + 1;
    }
    return ans;
}