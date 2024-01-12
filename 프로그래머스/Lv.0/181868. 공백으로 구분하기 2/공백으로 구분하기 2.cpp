#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string s) {
    vector<string> answer;
    stringstream ss(s);
    string tmp;

    while (ss >> tmp) {
        answer.push_back(tmp);
    }
    return answer;
}