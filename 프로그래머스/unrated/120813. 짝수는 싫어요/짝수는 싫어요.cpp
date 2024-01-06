#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (int i = 1; i < n + 1; i += 2)
        answer.push_back(i);
    return answer;
}