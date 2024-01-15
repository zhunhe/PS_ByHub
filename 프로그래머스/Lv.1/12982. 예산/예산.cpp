#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    sort(d.begin(), d.end());
    int ans = 0;
    for (int elem : d) {
        if (budget < elem) break;
        budget -= elem;
        ++ans;
    }
    return ans;
}