#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int tmp = n;
    for (int i = 2; i < tmp + 1; i++) {
        if (n % i == 0) {
            n /= i;
            answer.push_back(i);
        }
        while (n % i == 0)
            n /= i;
    }
    return answer;
}