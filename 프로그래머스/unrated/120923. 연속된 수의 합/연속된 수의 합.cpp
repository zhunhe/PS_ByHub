#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;

    if (num % 2 == 1) {
        const int start = (total / num) - (num - 1) / 2;
        for (int i = start; i < start + num; i++)
            answer.push_back(i);
    } else {
        const int start = (total / num) - (num / 2) + 1;
        for (int i = start; i < start + num; i++)
            answer.push_back(i);
    }
    return answer;
}