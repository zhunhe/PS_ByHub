#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> elements) {
    const int len = elements.size();
    elements.insert(elements.end(), elements.begin(), elements.end());
    unordered_map<int, int> m;
    for (int i = 0; i < elements.size(); i++) {
        int sum = 0;
        for (int j = 0; j < len && i + j < elements.size(); j++) {
            sum += elements[i + j];
            ++m[sum];
        }
    }
    return m.size();
}