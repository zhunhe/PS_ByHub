#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0, cnt = 0;
    char c = s[0];
    for (int i = 0; i < s.size(); i++) {
        if (cnt == 0) c = s[i];
        s[i] == c ? ++cnt : --cnt;
        if (cnt == 0) {
            ++answer;
            c = 0;
        }
    }
    return answer + (c != 0);
}