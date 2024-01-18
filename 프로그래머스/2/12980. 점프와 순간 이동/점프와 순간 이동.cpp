int solution(int n) {
    int ans = 0;
    while (n > 0)
        n & 1 ? --n, ++ans : n >>= 1;
    return ans;
}