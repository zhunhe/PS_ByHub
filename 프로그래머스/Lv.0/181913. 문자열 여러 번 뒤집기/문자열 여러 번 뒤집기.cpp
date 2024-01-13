#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, vector<vector<int>> queries) {
    for (const vector<int>& q : queries)
        reverse(s.begin() + q[0], s.begin() + q[1] + 1);
    return s;
}