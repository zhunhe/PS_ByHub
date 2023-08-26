#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    const int yLen = arr1.size(), xLen = arr2[0].size();
    vector<vector<int>> answer(yLen, vector<int>(xLen, 0));
    for (int y = 0; y < yLen; y++) {
        for (int x = 0; x < xLen; x++) {
            for (int i = 0; i < arr1[0].size(); i++) {
                answer[y][x] += arr1[y][i] * arr2[i][x];
            }
        }
    }
    return answer;
}