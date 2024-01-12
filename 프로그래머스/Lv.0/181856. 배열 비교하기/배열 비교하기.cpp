#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    if (arr2.size() > arr1.size()) return -1;
    if (arr2.size() < arr1.size()) return 1;
    const int arr1Sum = accumulate(arr1.begin(), arr1.end(), 0);
    const int arr2Sum = accumulate(arr2.begin(), arr2.end(), 0);
    if (arr2Sum > arr1Sum) return -1;
    if (arr2Sum < arr1Sum) return 1;
    return 0;
}