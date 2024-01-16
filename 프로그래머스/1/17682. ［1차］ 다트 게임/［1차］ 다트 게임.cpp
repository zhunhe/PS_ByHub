#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <numeric>

using namespace std;

int solution(string dartResult) {
    map<char, int> m = {{'S', 1}, {'D', 2}, {'T', 3}};
    vector<int> scores;
    int num = 0;
    for (const char& c : dartResult) {
        if (isdigit(c)) num = num * 10 + (c - '0');
        if (c == 'S' || c == 'D' || c == 'T') {
            scores.push_back(pow(num, m[c]));
            num = 0;
        }
        if (c == '#')
            scores[scores.size() - 1] *= -1;
        if (c == '*') {
            int last = scores.size() - 1;
            for (int i = last; i >= 0 && i >= last - 1; i--)
                scores[i] *= 2;
        }
    }
    return accumulate(scores.begin(), scores.end(), 0);
}