#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    string s = "";
    for (const string elem: spell) s += elem;
    sort(s.begin(), s.end());
    for (string& elem: dic) sort(elem.begin(), elem.end());
    for (const string elem: dic)
        if (elem == s)
            return 1;
    return 2;
}