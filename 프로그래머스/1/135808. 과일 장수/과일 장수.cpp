#include <vector>
#include <queue>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    priority_queue<int> pq;
    for (int elem : score) pq.push(elem);
    while (!pq.empty()) {
        for (int i = 0; i < m - 1; i++) {
            pq.pop();
            if (pq.empty())
                return answer;
        }
        answer += pq.top() * m;
        if (!pq.empty()) pq.pop();
    }
    return answer;
}