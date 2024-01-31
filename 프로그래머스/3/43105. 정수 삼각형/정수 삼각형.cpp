#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> triangle) {
    for (int i = 1; i < triangle.size(); i++) {
        triangle[i][0] += triangle[i - 1][0];
        for (int j = 1; j < i; j++)
            triangle[i][j] += max(triangle[i - 1][j - 1], triangle[i - 1][j]);
        triangle[i][i] += triangle[i - 1][i - 1];
    }
    return *max_element(triangle.back().begin(), triangle.back().end());
}