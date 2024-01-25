#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    for (auto num : delete_list)
        if (find(arr.begin(), arr.end(), num) != arr.end())
            arr.erase(find(arr.begin(), arr.end(), num));
    return arr;
}