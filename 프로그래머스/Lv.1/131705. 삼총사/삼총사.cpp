#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    const int len = number.size();
    int answer = 0;
    for (int i = 0; i < len; i++)
        for (int j = i + 1; j < len; j++)
            for (int k = j + 1; k < len; k++)
                if (number[i] + number[j] + number[k] == 0)
                    ++answer;
    return answer;
}