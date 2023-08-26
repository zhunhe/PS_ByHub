#include <bits/stdc++.h>
using namespace std;

int completed[101];

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    const int len = progresses.size();
    int releaseDay = 0;
    for (int i = 0; i < len; i++) {
        const int left = 100 - progresses[i];
        const int day = left / speeds[i] + (left % speeds[i] == 0 ? 0 : 1);
        if (day <= releaseDay)
            answer[answer.size() - 1]++;
        else {
            answer.push_back(1);
            releaseDay = day;
        }
    }
    return answer;
}