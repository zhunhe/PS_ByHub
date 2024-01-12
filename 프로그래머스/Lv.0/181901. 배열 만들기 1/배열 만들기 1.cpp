#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer(n / k);
    for (int i = 0; i < answer.size(); i++)
        answer[i] = k * (i + 1);
    return answer;
}