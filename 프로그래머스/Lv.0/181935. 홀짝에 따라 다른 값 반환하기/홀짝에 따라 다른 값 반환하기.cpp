#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int ans = 0;
    while (n > 0) {
        ans += (n & 1 ? n : n * n);
        n -= 2;
    }
    return ans;
}