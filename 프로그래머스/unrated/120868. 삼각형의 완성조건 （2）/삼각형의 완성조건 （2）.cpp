#include <vector>

using namespace std;

int solution(vector<int> sides) {
    return min(sides[0], sides[1]) * 2 - 1;
}