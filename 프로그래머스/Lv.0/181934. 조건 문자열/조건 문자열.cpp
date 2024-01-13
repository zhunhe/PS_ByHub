#include <string>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    if (ineq == ">")
        return eq == "=" ? n >= m : n > m;
    return eq == "=" ? n <= m : n < m;
}