#include <bits/stdc++.h>
using namespace std;

vector<int> ans(2);

void divide_and_conquer(const vector<vector<int>>& arr, int len, int y, int x) {
    if (len == 0) return;
    int sum = 0;
    for (int i = y; i < y + len; i++)
        for (int j = x; j < x + len; j++)
            sum += arr[i][j];
    if (sum == 0) {
        ++ans[0];
        return;
    } else if (sum == len * len) {
        ++ans[1];
        return;
    }
    len >>= 1;
    divide_and_conquer(arr, len, y, x);
    divide_and_conquer(arr, len, y, x + len);
    divide_and_conquer(arr, len, y + len, x);
    divide_and_conquer(arr, len, y + len, x + len);
}

vector<int> solution(vector<vector<int>> arr) {
    divide_and_conquer(arr, arr.size(), 0, 0);
    return ans;
}