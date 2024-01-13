#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strs) {
    for (int i = 0; i < strs.size(); i++) {
        if (strs[i] == "l")
            return vector<string>(strs.begin(), strs.begin() + i);
        else if (strs[i] == "r")
            return vector<string>(strs.begin() + i + 1, strs.end());
    }
    return {};
}