#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> tmp;
    for (const int num: num_list) {
        tmp.push_back(num);
        if (tmp.size() == n) {
            answer.push_back(tmp);
            tmp.clear();
        }
    }
    return answer;
}