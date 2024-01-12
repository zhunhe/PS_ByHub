#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strs) {
    vector<string> ans;
    for (const string& str : strs)
        if (str.find("ad") == string::npos)
            ans.push_back(str);
    return ans;
}