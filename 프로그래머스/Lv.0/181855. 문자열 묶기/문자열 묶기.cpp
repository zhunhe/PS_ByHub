#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int strLens[31];

int solution(vector<string> strs) {
    for (const string& str : strs) strLens[str.size()]++;
    return *max_element(strLens, strLens + 31);
}