#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<vector<int>> b(rows, vector<int>(columns));
    vector<int> ans;
    int num = 1;
    for (int x = 0; x < rows; x++) for (int y = 0; y < columns; y++) b[x][y] = num++;
    for (const auto& query : queries) {
        const int x1 = query[0] - 1, y1 = query[1] - 1, x2 = query[2] - 1, y2 = query[3] - 1;
        vector<int> v;
        // →
        for (int y = y1; y < y2; y++) v.push_back(b[x1][y]);
        // ↓
        for (int x = x1; x < x2; x++) v.push_back(b[x][y2]);
        // ←
        for (int y = y2; y > y1; y--) v.push_back(b[x2][y]);
        // ↑
        for (int x = x2; x > x1; x--) v.push_back(b[x][y1]);
        ans.push_back(*min_element(v.begin(), v.end()));
        rotate(v.begin(), v.end() - 1, v.end());
        int idx = 0;
        // →
        for (int y = y1; y < y2; y++) b[x1][y] = v[idx++];
        // ↓
        for (int x = x1; x < x2; x++) b[x][y2] = v[idx++];;
        // ←
        for (int y = y2; y > y1; y--) b[x2][y] = v[idx++];;
        // ↑
        for (int x = x2; x > x1; x--) b[x][y1] = v[idx++];;
    }
    return ans;
}