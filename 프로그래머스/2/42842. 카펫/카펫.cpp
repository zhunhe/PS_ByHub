#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int big = brown + yellow;
    int small = yellow;
    for (int i = 1; i < brown + 1; i++)
        for (int j = 1; j < brown + 1; j++)
            if (i * j == big && (i - 2) * (j - 2) == small)
                return {max(i, j), min(i, j)};
    return {};
}