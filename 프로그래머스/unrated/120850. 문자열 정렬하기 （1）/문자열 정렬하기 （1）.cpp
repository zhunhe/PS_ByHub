#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (const char c: my_string)
        if (isdigit(c))
            answer.push_back(c - '1' + 1);
    sort(answer.begin(), answer.end());
    return answer;
}