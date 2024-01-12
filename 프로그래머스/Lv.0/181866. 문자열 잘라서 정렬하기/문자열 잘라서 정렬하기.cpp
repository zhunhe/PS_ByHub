#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> solution(string s) {
    stringstream ss(s);
    string tmp;
    vector<string> answer;

    while (getline(ss, tmp, 'x'))
        if (tmp != "")
            answer.push_back(tmp);
    sort(answer.begin(), answer.end());
    return answer;
}