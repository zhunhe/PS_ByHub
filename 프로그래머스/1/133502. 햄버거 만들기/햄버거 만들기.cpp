#include <vector>

using namespace std;

#define VEGI    2
#define BREAD   1
#define MEAT    3

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> st;
    for (int elem : ingredient) {
        st.push_back(elem);
        const int last = st.size() - 1;
        if (st.size() > 3 && st[last - 3] == BREAD && st[last - 2] == VEGI && st[last - 1] == MEAT && st[last] == BREAD) {
            st.erase(st.end() - 4, st.end());
            ++answer;
        }
    }
    return answer;
}