#include <bits/stdc++.h>
using namespace std;

int idx;

bool compare(const vector<int>& lhs, const vector<int>& rhs) {
    if (lhs[idx] == rhs[idx])
        return lhs[0] > rhs[0];
    return lhs[idx] < rhs[idx];
}

int solution(vector<vector<int>> data, int col, int row_begin, int row_end) {
    idx = col - 1;
    sort(data.begin(), data.end(), compare);
    int ans = 0;
    for (int i = row_begin - 1; i < row_end; i++) {
        int modSum = 0;
        for (int j = 0; j < data[0].size(); j++)
            modSum += data[i][j] % (i + 1);
        ans ^= modSum;
    }
    return ans;
}