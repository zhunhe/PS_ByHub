#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> ans(arr1.size(), vector<int>(arr2[0].size(), 0));
    for (int y = 0; y < arr1.size(); y++)
        for (int x = 0; x < arr2[0].size(); x++)
            for (int i = 0; i < arr1[0].size(); i++)
                ans[y][x] += arr1[y][i] * arr2[i][x];
    return ans;
}