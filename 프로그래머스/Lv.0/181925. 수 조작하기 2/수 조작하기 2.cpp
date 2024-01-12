#include <string>
#include <vector>
#include <map>

using namespace std;

map<int, string> m = {{1, "w"}, {-1, "s"}, {10, "d"}, {-10, "a"}};
string solution(vector<int> numLog) {
    string ans = "";
    for (int i = 1; i < numLog.size(); i++)
        ans += m[numLog[i] - numLog[i - 1]];
    return ans;
}