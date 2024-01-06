#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> numbers) {
    priority_queue<int> pq;
    for (const int number: numbers)
        pq.push(number);
    
    int answer = 1;
    for (int i = 0; i < 2; i++) {
        answer *= pq.top();
        pq.pop();
    }
    return answer;
}