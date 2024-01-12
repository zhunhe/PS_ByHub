#include <string>
#include <vector>

using namespace std;

int solution(vector<int> d1, vector<int> d2) {
    return d1[0] * 365 + d1[1] * 30 + d1[2] < d2[0] * 365 + d2[1] * 30 + d2[2];
}