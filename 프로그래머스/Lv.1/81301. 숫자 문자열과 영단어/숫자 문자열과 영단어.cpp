#include <string>
#include <map>

using namespace std;

const map<string, int> m = {
    {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5},
    {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"zero", 0}
};

int solution(string s) {
    int answer = 0;
    int i = 0;
    while (i < s.size()) {
        if (isdigit(s[i])) {
            answer = answer * 10 + (s[i++] - '0');
            continue;
        }
        for (auto [key, value] : m) {
            if (s.substr(i, key.size()) != key) continue;
            answer = answer * 10 + value;
            i += key.size();
            break;
        }
    }
    return answer;
}