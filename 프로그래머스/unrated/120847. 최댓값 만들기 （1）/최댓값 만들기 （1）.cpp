#include <vector>
#include <queue>

using namespace std;

#define COUNT   2

int solution(vector<int> numbers) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (const int number: numbers) {
        pq.push(number);
        while (pq.size() > COUNT)
            pq.pop();
    }
    
    int answer = 1;
    while (!pq.empty()) {
        answer *= pq.top();
        pq.pop();
    }
    return answer;
}