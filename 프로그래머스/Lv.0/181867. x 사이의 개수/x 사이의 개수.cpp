#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    for (char& c : s)
        if (c == 'x')
            c = ' ';
    vector<int> ans;
    int len = 0;
    for (char c : s) {
        if (c == ' ')
            ans.push_back(len), len = 0;
        else
            len++;
    }
    ans.push_back(len);
    return ans;
}