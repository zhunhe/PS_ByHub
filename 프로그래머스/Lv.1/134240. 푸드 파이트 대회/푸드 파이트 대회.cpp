#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for (int i = 0; i < food.size(); i++) {
        while (food[i] >= 2) {
            answer += to_string(i);
            food[i] -= 2;
        }
    }
    answer += "0";
    for (int i = answer.size() - 2; i >= 0; i--)
        answer += answer[i];
    return answer;
}