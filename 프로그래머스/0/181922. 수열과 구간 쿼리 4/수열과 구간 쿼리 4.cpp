#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (const auto& v : queries)
        for (int i = v[0]; i < v[1] + 1; i++)
            if (!(i % v[2]))
                ++arr[i];
    return arr;
}