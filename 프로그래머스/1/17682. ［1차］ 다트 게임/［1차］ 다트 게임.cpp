#include <bits/stdc++.h>
using namespace std;

int solution(string dartResult) {
    int score = 0;
    vector<int> ans;
    for (auto c : dartResult) {
        switch (c) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                score = score * 10 + c - '0';
                break;
            case 'S':
                ans.push_back(score);
                score = 0;
                break;
            case 'D':
                ans.push_back(pow(score, 2));
                score = 0;
                break;
            case 'T':
                ans.push_back(pow(score, 3));
                score = 0;
                break;
            case '*':
                ans.back() *= 2;
                if (ans.size() > 1) ans[ans.size() - 2] *= 2;
                break;
            case '#':
                ans.back() *= -1;
                break;
        }
    }
    return reduce(ans.begin(), ans.end());
}