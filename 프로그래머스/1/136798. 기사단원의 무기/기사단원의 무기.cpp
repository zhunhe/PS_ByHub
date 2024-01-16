#include <vector>
#include <numeric>

using namespace std;

int calDivisorCnt(int num) {
    int cnt = 0;
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) cnt += 2;
        if (i * i == num) --cnt;
    }
    return cnt;
}

int solution(int number, int limit, int power) {
    int ans = 0;
    for (int i = 1; i < number + 1; i++) {
        int divisorCnt = calDivisorCnt(i);
        ans += divisorCnt <= limit ? divisorCnt: power;
    }
    return ans;
}