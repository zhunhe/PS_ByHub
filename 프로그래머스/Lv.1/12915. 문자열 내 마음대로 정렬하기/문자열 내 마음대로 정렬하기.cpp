#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> s, int n) {
    sort(s.begin(), s.end(), [&](const string& lhs, const string& rhs) {
        return lhs[n] == rhs[n] ? lhs < rhs : lhs[n] < rhs[n];
    });
    return s;
}