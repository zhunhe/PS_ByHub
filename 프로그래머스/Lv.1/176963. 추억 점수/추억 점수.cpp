#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    map<string, int> m;
    for (int i = 0; i < name.size(); i++) m[name[i]] = yearning[i];
    vector<int> answer;
    for (const vector<string>& v : photo) {
        int score = 0;
        for (const string& s : v)
            score += m[s];
        answer.push_back(score);
    }
    return answer;
}