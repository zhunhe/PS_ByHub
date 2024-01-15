#include <string>

using namespace std;

string solution(int n) {
    string answer = "";
    for (int i = 1; i < n; i += 2)
        answer += "수박";
    return answer + (n & 1 ? "수" : "");
}