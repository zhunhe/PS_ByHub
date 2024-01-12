#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    for (const int num : delete_list)
        arr.erase(remove(arr.begin(), arr.end(), num), arr.end());
    return arr;
}