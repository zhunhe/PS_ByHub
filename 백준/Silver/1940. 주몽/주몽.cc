/*
 * 주몽
 * https://www.acmicpc.net/problem/1940
 */

#include <iostream>
#include <algorithm>
using namespace std;

int N;
int M;
int SOURCE[15000];

int solution() {
    int answer = 0;
    int left = 0;
    int right = N - 1;

    while (left < right) {
        if (SOURCE[left] + SOURCE[right] == M) {
            answer++;
            left++;
            right--;
        } else if (SOURCE[left] + SOURCE[right] < M) {
            left++;
        } else {
            right--;
        }
    }
    return answer;
}

bool compare(int val1, int val2) {
    return val1 < val2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    cin >> M;
    for (int i = 0; i < N; i++) {
        cin >> SOURCE[i];
    }
    sort(SOURCE, SOURCE + N, compare);
    int answer = solution();
    cout << answer;
    return 0;
}