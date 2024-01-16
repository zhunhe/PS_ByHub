#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int elem : score) {
        pq.push(elem);
        if (pq.size() > k)
            pq.pop();
        answer.push_back(pq.top());
    }
    return answer;
}