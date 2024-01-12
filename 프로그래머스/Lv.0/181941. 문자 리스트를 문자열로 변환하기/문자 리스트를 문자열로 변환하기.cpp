#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string ans = "";
    for (const string& s : arr)
        ans += s;
    return ans;
}