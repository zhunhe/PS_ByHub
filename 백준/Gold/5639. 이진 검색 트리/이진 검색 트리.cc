#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

vector<int> numbers;

void preToPost(int l, int r) {
    int ans = l, sub = l++;
    while (numbers[++sub] < numbers[ans])
        ;
    if (l <= sub - 1)
        preToPost(l, sub - 1);
    if (sub <= r)
        preToPost(sub, r);
    cout << numbers[ans] << '\n';
}

int main() {
    FASTIO
    int input;
    while (cin >> input) numbers.push_back(input);
    numbers.push_back(INT32_MAX);
    preToPost(0, numbers.size() - 2);
}
