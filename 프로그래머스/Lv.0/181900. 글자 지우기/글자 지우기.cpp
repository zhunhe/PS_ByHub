#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool ex[101];

string solution(string s, vector<int> indices) {
    string ans = "";
    for (int i : indices) ex[i] = true;
    for (int i = 0; i < s.size(); i++)
        if (!ex[i])
            ans += s[i];
    return ans;
}