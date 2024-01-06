#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(2);

    for (const int num: num_list)
        answer[num & 1]++;
    return answer;
}