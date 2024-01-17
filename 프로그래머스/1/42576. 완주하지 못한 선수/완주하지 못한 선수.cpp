#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> result;
    for (const string& s : participant) ++result[s];
    for (const string& s : completion) --result[s];
    for (auto [key, value] : result)
        if (value > 0)
            return key;
    return "";
}