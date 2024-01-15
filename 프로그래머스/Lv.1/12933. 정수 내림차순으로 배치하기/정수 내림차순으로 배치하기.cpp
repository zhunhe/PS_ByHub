#include <string>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string s = to_string(n);
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    return stoll(s);
}