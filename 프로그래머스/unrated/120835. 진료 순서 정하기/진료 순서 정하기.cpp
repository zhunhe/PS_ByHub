#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> emergency) {
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < emergency.size(); i++)
        pq.push({emergency[i], i});
    vector<int> answer(emergency.size());
    int rank = 1;
    while (!pq.empty()) {
        answer[pq.top().second] = rank++;
        pq.pop();
    }
    return answer;
}