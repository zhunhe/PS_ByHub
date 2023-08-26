#include <bits/stdc++.h>
using namespace std;

bool cmp(const vector<int> lhs, const vector<int> rhs) {
   return lhs.size() < rhs.size();
}

vector<int> solution(string s) {
    vector<int> numbers;
    int number = 0, len = s.size();
    vector<vector<int>> tmps;
    vector<int> tmp;
    for (int i = 2; i < len; i++) {
        if (isdigit(s[i]))
            number = number * 10 + (s[i] - '0');
        else if ((s[i] == '}' && s[i + 1] == ',' && s[i + 2] == '{')
            || (s[i] == '}' && s[i + 1] == '}')) {
            tmp.push_back(number);
            number = 0;
            tmps.push_back(tmp);
            tmp.clear();
        } else if (s[i] == ',') {
            if (number > 0)
                tmp.push_back(number);
            number = 0;
        }
    }
    sort(tmps.begin(), tmps.end(), cmp);
    vector<int> answer;
    for (int i = 0; i < tmps.size(); i++) {
        for (int j = 0; j < tmps[i].size(); j++) {
            if (find(answer.begin(), answer.end(), tmps[i][j]) == answer.end())
                answer.push_back(tmps[i][j]);
        }
    }
    return answer;
}