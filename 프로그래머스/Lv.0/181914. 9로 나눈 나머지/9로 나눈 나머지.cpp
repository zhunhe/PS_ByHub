#include <string>

using namespace std;

int solution(string s) {
    int ans = 0;
    for (char c : s)
        ans += c - '0';
    return ans % 9;
}