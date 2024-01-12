#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int ans = 0;
    for (int i = 0; i < included.size(); i++) {
        if (included[i])
            ans += a;
        a += d;
    }
    return ans;
}