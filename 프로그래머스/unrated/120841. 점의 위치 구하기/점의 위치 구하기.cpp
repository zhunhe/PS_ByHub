#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    const int x = dot[0], y = dot[1];
    return y > 0 && x > 0 ? 1 :
           y > 0 && x < 0 ? 2 :
           y < 0 && x < 0 ? 3 :
           4;
}