#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, int> alphas = {
    {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5},
    {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"zero", 0}
};

long long solution(string numbers) {
    long long answer = 0;
    string s = "";
    for (const char c: numbers) {
        s += c;
        auto find = alphas.find(s);
        if (find != alphas.end()) {
            answer = answer * 10 + find->second;
            s = "";
        }
    }
    return answer;
}