#include <string>
#include <vector>

using namespace std;

string solution(vector<string> strs, string ex) {
    string ans = "";
    for (const string& str : strs)
        if (str.find(ex) == string::npos)
            ans += str;
    return ans;
}