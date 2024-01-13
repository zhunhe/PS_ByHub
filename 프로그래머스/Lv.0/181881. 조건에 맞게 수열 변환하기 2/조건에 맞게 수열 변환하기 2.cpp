#include <vector>
#include <algorithm>

using namespace std;

bool isSameArray(const vector<int>& a, const vector<int>& b) {
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

int solution(vector<int> before) {
    vector<int> after;
    for (int i = 0; i < 987654321; i++) {
        after = before;
        for (int& elem : before) {
            if (elem >= 50 && !(elem & 1))
                elem >>= 2;
            else if (elem < 50 && elem & 1)
                elem = (elem << 1) + 1;
        }
        if (isSameArray(before, after))
            return i;
    }
}