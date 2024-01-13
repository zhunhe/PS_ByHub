#include <string>

using namespace std;

string solution(int q, int r, string code) {
    string ans = "";
    for (int i = 0; i < code.size(); i++)
        if (i % q == r)
            ans += code[i];
    return ans;
}