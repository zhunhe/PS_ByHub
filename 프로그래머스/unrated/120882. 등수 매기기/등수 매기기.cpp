#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size());
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < score.size(); i++)
        pq.push({score[i][0] + score[i][1], i});
    int rank = 1, prevScore = pq.top().first;
    answer[pq.top().second] = rank;
    pq.pop();
    while (!pq.empty()) {
        if (prevScore == pq.top().first)
            answer[pq.top().second] = rank;
        else {
            rank = 0;
            for (const int num: answer)
                if (num > 0)
                    rank++;
            answer[pq.top().second] = ++rank;
        }
        prevScore = pq.top().first;
        pq.pop();
    }
    return answer;
}