#include <vector>

using namespace std;

vector<int> solution(int start, int end_num) {
    vector<int> answer(start - end_num + 1);
    for (int i = 0; i < answer.size(); i++)
        answer[i] = start - i;
    return answer;
}