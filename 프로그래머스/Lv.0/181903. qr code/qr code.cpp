#include <string>

using namespace std;

string solution(int q, int r, string code) {
    string ans = "";
    for (int i = r; i < code.size(); i += q)
        ans += code[i];
    return ans;
}