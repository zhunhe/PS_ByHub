#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b, int c, int d) {
    set<int> st = {a, b, c, d};
    vector<int> v = {a, b, c, d};
    sort(v.begin(), v.end());
    switch (st.size()) {
        case 1: return 1111 * a;
        case 2:
            if (v[0] == v[1] && v[2] == v[3]) return (v[0] + v[2]) * (v[2] - v[0]);

            if (v[0] == v[1] && v[0] != v[3]) return pow(10 * v[0] + v[3], 2);
            if (v[3] == v[2] && v[3] != v[0]) return pow(10 * v[3] + v[0], 2);
        case 3:
            if (v[0] == v[1]) return v[2] * v[3];
            if (v[1] == v[2]) return v[0] * v[3];
            if (v[2] == v[3]) return v[0] * v[1];
        case 4: return *min_element(v.begin(), v.end());
    }
    return 0;
}