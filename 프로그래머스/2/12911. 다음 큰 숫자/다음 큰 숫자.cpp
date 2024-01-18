int countOne(int num) {
    int cnt = 0;
    while (num > 0) {
        cnt += (num & 1);
        num >>= 1;
    }
    return cnt;
}

int solution(int n) {
    int cnt = countOne(n);
    while (countOne(++n) != cnt)
        ;
    return n;
}