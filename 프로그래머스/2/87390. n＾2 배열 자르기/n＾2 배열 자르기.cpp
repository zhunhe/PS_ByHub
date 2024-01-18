#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> ans(right - left + 1);
    int idx = 0;
    for (long long i = left; i < right + 1; i++)
        ans[idx++] = max(i / n, i % n) + 1;
    return ans;
}