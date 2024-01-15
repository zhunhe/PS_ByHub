#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    vector<int> cnt(10, 0);
    for (int number : numbers) cnt[number]++;
    int answer = 0;
    for (int i = 1; i < 10; i++)
        if (!cnt[i])
            answer += i;
    return answer;
}