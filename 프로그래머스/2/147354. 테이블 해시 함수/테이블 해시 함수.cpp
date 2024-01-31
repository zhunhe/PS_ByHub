#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> data, int col, int row_begin, int row_end) {
    sort(data.begin(), data.end(), [=](auto lhs, auto rhs) {
        if (lhs[col - 1] == rhs[col - 1])
            return lhs[0] > rhs[0];
        return lhs[col - 1] < rhs[col - 1];
    });
    int ans = 0;
    for (int i = row_begin - 1; i < row_end; i++) {
        int sum = 0;
        for (const auto& num : data[i]) sum += num % (i + 1);
        ans ^= sum;
    }
    return ans;
}