#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int ans = 0;
    for (const string& menu : order)
        ans += (menu.find("cafelatte") != string::npos ? 5000 : 4500);
    return ans;
}