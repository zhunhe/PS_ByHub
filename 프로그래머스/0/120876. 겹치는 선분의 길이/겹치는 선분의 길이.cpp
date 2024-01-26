#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> lines) {
    sort(lines.begin(), lines.end());
    vector<int> cnt(201);
    for (int i = 0; i < lines.size(); i++)
        for (int j = lines[i][0]; j < lines[i][1]; j++)
            ++cnt[j + 100];
    return count_if(cnt.begin(), cnt.end(), [](int n) { return n >= 2; });
}