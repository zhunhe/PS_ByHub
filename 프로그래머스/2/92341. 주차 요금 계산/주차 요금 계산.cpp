#include <bits/stdc++.h>
using namespace std;

int toMinute(const string& t) {
    const int h = (t[0] - '0') * 10 + (t[1] - '0');
    const int m = (t[3] - '0') * 10 + (t[4] - '0');
    return h * 60 + m;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> v[10000];
    for (const string& record : records) {
        stringstream ss(record);
        string time, car, type;
        ss >> time >> car >> type;
        v[stoi(car)].push_back(toMinute(time));
    }

    vector<int> answer;
    for (int i = 0; i < 10000; i++) {
        if (v[i].empty()) continue;

        if (v[i].size() & 1) v[i].push_back(23 * 60 + 59);

        int t = 0;
        for (int j = 1; j < v[i].size(); j += 2) t += v[i][j] - v[i][j - 1];

        int fee = fees[1];
        if (t > fees[0]) fee += (t - fees[0] + fees[2] - 1) / fees[2] * fees[3];

        answer.push_back(fee);
    }
    return answer;
}