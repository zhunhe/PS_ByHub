int solution(int n) {
    int answer = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i) continue;
        answer += i;
        if (i * i < n)
            answer += n / i;
    }
    return answer;
}