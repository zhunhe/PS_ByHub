#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string s = "";
    for (const char c: my_str) {
        if (s.size() < n) {
            s += c;
            continue;
        }
        answer.push_back(s);
        s = c;
    }
    if (!s.empty())
        answer.push_back(s);
    return answer;
}