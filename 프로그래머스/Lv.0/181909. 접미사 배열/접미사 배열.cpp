#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string s) {
    vector<string> ans;
    for (int i = s.size() - 1; i >= 0; i--)
        ans.push_back(s.substr(i));
    sort(ans.begin(), ans.end());
    return ans;
}