#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer(commands.size());
    for (int i = 0; i < commands.size(); i++) {
        vector<int> tmp(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);
        sort(tmp.begin(), tmp.end());
        answer[i] = tmp[commands[i][2] - 1];
    }
    return answer;
}