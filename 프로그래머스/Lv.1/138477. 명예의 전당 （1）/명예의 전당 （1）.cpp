#include <vector>
#include <algorithm>

#include <iostream>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer, tmp;
    for (int elem : score) {
        tmp.push_back(elem);
        sort(tmp.begin(), tmp.end(), greater<int>());
        if (tmp.size() > k)
            tmp.pop_back();
        answer.push_back(tmp.back());
    }
    return answer;
}