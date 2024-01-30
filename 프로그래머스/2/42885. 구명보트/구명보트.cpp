#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> people, int limit) {
    int ans = 0, l = 0, r = people.size() - 1;
    sort(people.begin(), people.end());
    while (l <= r) {
        if (people[l] + people[r] <= limit)
            ++l, --r, ++ans;
        else if (people[r] <= limit)
            --r, ++ans;
        else
            --r;
    }
    return ans;
}