#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

#include <iostream>

using namespace std;

string solution(string a, string b) {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    vector<int> sum(100002, -1);
    for (int i = 0; i < a.size(); i++) {
        sum[i] = a[i] - '0';
    }
    for (int i = 0; i < b.size(); i++) {
        sum[i] = max(sum[i], 0) + b[i] - '0';
        if (sum[i] >= 10) {
            sum[i] %= 10;
            sum[i + 1] = max(sum[i + 1], 0) + 1;
        }
    }
    string ans = "";
    for (int i = 0; i < sum.size(); i++)
        if (sum[i] != -1)
            ans += (sum[i] + '0');
    reverse(ans.begin(), ans.end());
    return ans;
}