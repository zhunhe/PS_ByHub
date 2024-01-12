#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> ans;
    for (const string& str : intStrs) {
        int num = stoi(str.substr(s, l));
        if (num > k)
            ans.push_back(num);
    }
    return ans;
}