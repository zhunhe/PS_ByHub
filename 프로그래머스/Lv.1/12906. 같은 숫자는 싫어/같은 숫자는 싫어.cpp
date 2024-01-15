#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int last = -1;
    for (int elem : arr) {
        if (elem == last) continue;
        answer.push_back(elem);
        last = elem;
    }
    return answer;
}