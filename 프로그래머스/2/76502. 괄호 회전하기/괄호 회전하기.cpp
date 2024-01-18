#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int rotateAndCheck(string s, int rotateCnt) {
    rotate(s.begin(), s.begin() + rotateCnt, s.end());
    stack<char> st;
    for (char c : s) {
        if (st.empty()) st.push(c);
        else if (c == ']' && st.top() == '[') st.pop();
        else if (c == '}' && st.top() == '{') st.pop();
        else if (c == ')' && st.top() == '(') st.pop();
        else st.push(c);
    }
    return st.empty();
}

int solution(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
        ans += rotateAndCheck(s, i);
    return ans;
}