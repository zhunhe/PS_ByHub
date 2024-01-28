#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    unordered_map<string, int> m;
    for (int i = 0; i < friends.size(); i++) m[friends[i]] = i;

    vector<int> points(friends.size());
    vector<vector<int>> record(friends.size(), vector<int>(friends.size()));

    for (const auto& s : gifts) {
        stringstream ss(s);
        string from, to; ss >> from >> to;
        ++record[m[from]][m[to]];
        ++points[m[from]];
        --points[m[to]];
    }
    vector<int> presents(friends.size());
    for (int from = 0; from < friends.size(); from++) {
        for (int to = from + 1; to < friends.size(); to++) {
            if (from == to) continue;

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