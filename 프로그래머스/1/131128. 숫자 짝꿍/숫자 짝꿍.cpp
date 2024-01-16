#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    vector<int> cntX(10), cntY(10);
    for (char c : X) ++cntX[c - '0'];
    for (char c : Y) ++cntY[c - '0'];
    string answer = "";
    for (int i = 9; i >= 0; i--) {
        int cnt = min(cntX[i], cntY[i]);
        while (cnt--)
            answer += (i + '0');
    }
    if (answer.size() > 1 && answer[0] == '0')
        answer = "0";
    if (answer.empty())
        answer += "-1";
    return answer;
}