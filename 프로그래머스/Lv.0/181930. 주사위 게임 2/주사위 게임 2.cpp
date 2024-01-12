#include <set>
#include <cmath>

using namespace std;

int solution(int a, int b, int c) {
    set<int> s = {a, b, c};
    int ans = a + b + c;
    switch (s.size()) {
        case 1: ans *= (pow(a, 3) + pow(b, 3) + pow(c, 3));
        case 2: ans *= (pow(a, 2) + pow(b, 2) + pow(c, 2));
    }
    return ans;
}