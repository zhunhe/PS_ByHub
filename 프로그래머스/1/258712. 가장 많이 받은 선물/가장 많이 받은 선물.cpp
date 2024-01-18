#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    unordered_map<string, int> indexByName;
    unordered_map<int, string> nameByIndex;
    const int len = friends.size();
    for (int i = 0; i < len; i++) {
        indexByName[friends[i]] = i;
        nameByIndex[i] = friends[i];
    }
    vector<vector<int>> record(len, vector<int>(len));
    unordered_map<string, int> futureByName;
    for (const string& gift : gifts) {
        stringstream ss(gift);
        string from, to; ss >> from >> to;
        ++record[indexByName[from]][indexByName[to]];
        ++futureByName[from];
        --futureByName[to];
    }
    int answer = 0;
    for (int i = 0; i < len; i++) {
        int cnt = 0;
        for (int j = 0; j < len; j++) {
            if (record[i][j] > record[j][i])
                ++cnt;
            else if (record[i][j] == record[j][i])
                if (futureByName[nameByIndex[i]] > futureByName[nameByIndex[j]])
                    ++cnt;
        }
        answer = max(answer, cnt);
    }
    return answer;
}