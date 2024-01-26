#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    const int h = arr.size(), w = arr[0].size();
    if (h > w)
        for (int i = 0; i < h; i++)
            arr[i].insert(arr[i].end(), h - w, 0);
    else if (h < w)
        arr.insert(arr.end(), w - h, vector<int>(w, 0));
    return arr;
}