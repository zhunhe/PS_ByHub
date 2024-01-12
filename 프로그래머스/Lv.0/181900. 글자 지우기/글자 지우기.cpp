#include <string>
#include <vector>
#include <sstream>

using namespace std;

bool ex[101];

string solution(string s, vector<int> indices) {
    string ans = "";
    for (int i : indices) s[i] = ' ';
    stringstream ss(s);
    string tmp;
    while (ss >> tmp)
        ans += tmp;
    return ans;
}