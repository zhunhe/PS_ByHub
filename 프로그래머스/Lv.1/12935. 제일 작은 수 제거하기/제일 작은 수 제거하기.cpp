#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    int _min = *min_element(arr.begin(), arr.end());
    arr.erase(remove(arr.begin(), arr.end(), _min), arr.end());
    if (arr.empty())
        arr.push_back(-1);
    return arr;
}