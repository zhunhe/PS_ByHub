#include <string>
#include <vector>
#include <regex>

using namespace std;

vector<string> solution(string s) {
    s = regex_replace(s, regex("[abc]"), " ");
    stringstream ss(s);
    string tmp;
    vector<string> ans;
    while (ss >> tmp)
        ans.emplace_back(tmp);
    if (ans.empty())
        ans.emplace_back("EMPTY");
    return ans;
}