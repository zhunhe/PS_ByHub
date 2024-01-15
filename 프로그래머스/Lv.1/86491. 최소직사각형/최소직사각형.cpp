#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int w = 0, h = 0;
    for (vector<int> size : sizes) {
        h = max(h, max(size[0], size[1]));
        w = max(w, min(size[0], size[1]));
    }
    return h * w;
}