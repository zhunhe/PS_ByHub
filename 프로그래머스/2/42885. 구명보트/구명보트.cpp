#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());
    int ans = 0, l = 0, r = people.size() - 1;
    while (l <= r) {
        ++ans;
        if (people[l] + people[r] <= limit)
            ++l, --r;
        else
            --r;
    }
    return ans;
}