int solution(int a, int b) {
    return a & 1 && b & 1 ? a * a + b * b :
           a & 1 || b & 1 ? 2 * (a + b) :
           a >= b ? a - b : b - a;
}