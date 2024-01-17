#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    // 1
    for (char& c : new_id)
        c = tolower(c);
    // 2
    for (int i = 0; i < new_id.size(); i++) {
        const char c = new_id[i];
        if (islower(c) || isdigit(c) || c == '-' || c == '_' || c == '.') continue;
        new_id = new_id.substr(0, i) + new_id.substr(i + 1);
        --i;
    }
    // 3
    for (int i = 1; i < new_id.size(); i++) {
        if (new_id[i - 1] == '.' && new_id[i] == '.') {
            new_id = new_id.substr(0, i) + new_id.substr(i + 1);
            --i;
        }
    }
    // 4
    if (new_id[0] == '.') new_id = new_id.substr(1);
    if (new_id[new_id.size() - 1] == '.') new_id.pop_back();
    // 5
    if (new_id.empty()) new_id = "a";
    // 6
    if (new_id.size() >= 16) new_id = new_id.substr(0, 15);
    if (new_id[new_id.size() - 1] == '.') new_id.pop_back();
    // 7
    while (new_id.size() <= 2)
        new_id += new_id[new_id.size() - 1];
    return new_id;
}