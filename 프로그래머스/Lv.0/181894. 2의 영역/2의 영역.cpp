#include <vector>

#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    int s = 0, e = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 2) continue;
        s = i;
        break;
    }
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] != 2) continue;
        e = i;
        break;
    }
    if (arr[s] != 2 && arr[e] != 2)
        return {-1};
    return {arr.begin() + s, arr.begin() + e + 1};
}