#include <string>
#include <vector>

using namespace std;

string solution(string s, vector<int> index_list) {
    string answer = "";
    for (const int index : index_list)
        answer += s[index];
    return answer;
}