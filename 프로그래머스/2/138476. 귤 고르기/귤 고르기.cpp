#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    map<int, int> m;
    for (int size : tangerine) ++m[size];
    vector<int> cnt;
    for (auto [size, count] : m)
        cnt.push_back(count);
    sort(cnt.rbegin(), cnt.rend());
    int answer = 0;
    for (int elem : cnt) {
        ++answer;
        k -= elem;
        if (k <= 0)
            break;
    }
    return answer;
}