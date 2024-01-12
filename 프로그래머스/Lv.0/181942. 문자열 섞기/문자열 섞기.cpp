#include <string>

using namespace std;

string solution(string str1, string str2) {
    string ans = "";
    for (int i = 0; i < str1.size(); i++)
        ans = ans + (char)str1[i] + (char)str2[i];
    return ans;
}