int solution(int num) {
    if (num == 1) return 0;
    long long n = num;

    for (int i = 1; i < 501; i++) {
        if (n & 1)
            n = n * 3 + 1;
        else
            n >>= 1;
        if (n == 1)
            return i;
    }
    return -1;
}