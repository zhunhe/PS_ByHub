long long solution(int n) {
    if (n <= 2)
        return n;
    long long ans = 2, a = 0, b = 1;
    for (int i = 3; i < n + 1; i++) {
        int tmp = ans;
        ans = (ans + b) % 1234567;
        a = b;
        b = tmp;
    }
    return ans;
}