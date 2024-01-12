#include <string>
#include <vector>

#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (vector<int> q : queries)
        swap(arr[q[0]], arr[q[1]]);
    return arr;
}