int calculateDigitSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

bool solution(int x) {
    int digitSum = calculateDigitSum(x);
    return x % digitSum == 0;
}