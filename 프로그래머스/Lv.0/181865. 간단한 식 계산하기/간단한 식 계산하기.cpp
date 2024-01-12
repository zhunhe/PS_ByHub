#include <string>
#include <sstream>

using namespace std;

int solution(string binomial) {
    stringstream ss(binomial);
    int lhs, rhs;
    char oper;
    ss >> lhs >> oper >> rhs;
    return oper == '+' ? lhs + rhs :
           oper == '-' ? lhs - rhs :
           lhs * rhs;
}