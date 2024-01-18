#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    unordered_map<string, bool> isUsed;
    isUsed[words[0]] = true;
    for (int i = 1; i < words.size(); i++) {
        if (isUsed[words[i]]) return {i % n + 1, (i + n) / n};
        if (words[i].size() == 1) return {i % n + 1, (i + n) / n};
        isUsed[words[i]] = true;
        if (words[i - 1].back() != words[i].front()) return {i % n + 1, (i + n) / n};
    }
    return {0, 0};
}