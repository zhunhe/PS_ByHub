#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int num = 1;
    while (n > 0) {
        answer.push_back(n % 10);
        n /= 10;
    }
    return answer;
}