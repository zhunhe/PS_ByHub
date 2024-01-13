#include <vector>
#include <set>

using namespace std;

bool saved[100002];

vector<int> solution(vector<int> arr, int k) {
    vector<int> ans;
    for (int num : arr) {
        if (saved[num]) continue;
        if (ans.size() >= k) break;
        ans.push_back(num);
        saved[num] = true;
    }
    while (ans.size() < k) ans.push_back(-1);
    return ans;
}