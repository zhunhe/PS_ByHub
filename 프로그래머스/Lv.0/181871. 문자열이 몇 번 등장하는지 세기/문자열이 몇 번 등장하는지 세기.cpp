#include <string>

using namespace std;

int solution(string s, string p) {
    int ans = 0;
    for (int i = 0; i < s.size() - p.size() + 1; i++)
        if (s.substr(i, p.size()) == p)
            ans++;
    return ans;
}