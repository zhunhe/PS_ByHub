#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int len = 1;
    while (len < arr.size()) len <<= 1;
    vector<int> ans = arr;
    ans.resize(len, 0);
    return ans;
}