#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> ans(52, 0);
    for (const char c : s)
        ++ans[islower(c) ? c - 'a' + 26 : c - 'A'];
    return ans;
}