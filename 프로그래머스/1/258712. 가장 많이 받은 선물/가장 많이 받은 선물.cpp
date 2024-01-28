#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    unordered_map<string, int> indexByName;
    const int len = friends.size();
    for (int i = 0; i < len; i++) indexByName[friends[i]] = i;
    vector<int> points(len);
    vector<vector<int>> record(len, vector<int>(len));
    for (const auto& s : gifts) {
        stringstream ss(s);
        string from, to; ss >> from >> to;
        ++record[indexByName[from]][indexByName[to]];
        ++points[indexByName[from]];
        --points[indexByName[to]];
    }
    vector<int> presents(len);
    for (int from = 0; from < len; from++) {
        for (int to = from + 1; to < len; to++) {
            if (record[from][to] > record[to][from])
                ++presents[from];
            else if (record[from][to] < record[to][from])
                ++presents[to];
            else if (points[from] > points[to])
                ++presents[from];
            else if (points[from] < points[to])
                ++presents[to];
        }
    }
    return *max_element(presents.begin(), presents.end());
}