#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> ans;

    for (int elem : arr)
        if (elem % divisor == 0)
            ans.push_back(elem);
    sort(ans.begin(), ans.end());
    return ans.empty() ? vector<int>{-1} : ans;
}