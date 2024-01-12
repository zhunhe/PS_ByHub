#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strArr) {
    for (int i = 0; i < strArr.size(); i++)
        transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), i & 1 ? ::toupper : ::tolower);
    return strArr;
}