#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;

    int start = 0;
    if (num % 2 == 1)
        start = (total / num) - num / 2;
    else
        start = (total / num) - (num / 2) + 1;
    for (int i = start; i < start + num; i++)
            answer.push_back(i);
    return answer;
}