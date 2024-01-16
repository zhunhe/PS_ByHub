#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int ans = 1, last = section[0];
    for (int point : section) {
        if (point >= last + m) {
            last = point;
            ++ans;
        }
    }
    return ans;
}