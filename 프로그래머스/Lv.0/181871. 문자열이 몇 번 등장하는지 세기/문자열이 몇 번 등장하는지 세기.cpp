#include <string>

using namespace std;

int solution(string s, string p) {
    int pos = s.find(p, 0);
    int ans = pos != string::npos;
    while (pos != string::npos) {
        pos = s.find(p, ++pos);
        ans += pos != string::npos;
    }
    return ans;
}