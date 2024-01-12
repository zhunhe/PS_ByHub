#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for (vector<int> range : intervals) {
        answer.insert(answer.end(), arr.begin() + range[0], arr.begin() + range[1] + 1);
    }
    return answer;
}