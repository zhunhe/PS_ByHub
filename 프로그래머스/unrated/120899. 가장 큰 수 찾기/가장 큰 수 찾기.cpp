#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int index = 0, maxNumber = 0;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] > maxNumber) {
            index = i;
            maxNumber = array[i];
        }
    }
    answer.push_back(maxNumber);
    answer.push_back(index);
    return answer;
}