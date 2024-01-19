#include <bits/stdc++.h>
using namespace std;

string convertBase(int num, int base) {
    if (num == 0) return "0";
    string s = "";
    while (num > 0) {
        s = string(1, num % base + '0') + s;
        num /= base;
    }
    return s;
}

bool isPrime(long long num) {
    if (num < 2) return false;
    for (long long i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int solution(int n, int k) {
    string s = convertBase(n, k);

    s = regex_replace(s, regex("0"), " ");

    stringstream ss(s);
    vector<long long> nums;
    while (!ss.eof()) {
        long long num; ss >> num;
        nums.push_back(num);
    }

    int ans = 0;
    for (auto num : nums)
        if (isPrime(num))
            ++ans;
    return ans;
}