int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i < right + 1; i++) {
        int count = 0;
        for (int j = 1; j * j <= i; j++) {
            if (i % j) continue;
            count += 2;
            if (j * j == i)
                --count;
        }
        answer += (count & 1 ? -i : i);
    }
    return answer;
}