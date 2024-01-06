#include <string>
#include <vector>

using namespace std;

#define COFFEE_PRICE    5500

vector<int> solution(int money) {
    vector<int> answer(2);

    answer[0] = money / COFFEE_PRICE;
    answer[1] = money % COFFEE_PRICE;
    return answer;
}