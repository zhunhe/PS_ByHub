#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n);
    for (int i = 0; i < n; i++) {
        int number = arr1[i] | arr2[i];
        string s;
        for (int i = pow(2, n - 1); i > 0; i >>= 1)
            s += (i & number ? "#" : " ");
        answer[i] = s;
    }
    return answer;
}