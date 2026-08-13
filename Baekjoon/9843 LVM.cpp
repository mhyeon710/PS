#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

vector <pair<string, int>> v;
stack <int> st;
int reg;
int main() {
    fio();

    int N; cin >> N;
    v.resize(N);
    for (int i=0; i<N; i++) {
        cin >> v[i].first;
        if (v[i].first == "PUSH" || v[i].first == "IFZERO") cin >> v[i].second;
    }

    int idx = 0;
    while (1) {
        auto [s, x] = v[idx];
        if (s == "PUSH") {
            st.push(x);
        } else if (s == "STORE") {
            reg = st.top();
            st.pop();
        } else if (s == "LOAD") {
            st.push(reg);
        } else if (s == "PLUS") {
            int one = st.top(); st.pop();
            int two = st.top(); st.pop();
            st.push(one + two);
        } else if (s == "TIMES") {
            int one = st.top(); st.pop();
            int two = st.top(); st.pop();
            st.push(one * two);
        } else if (s == "IFZERO") {
            int top = st.top(); st.pop();
            if (top == 0) {
                idx = x;
                continue;
            }
        } else if (s == "DONE") {
            cout << st.top() << '\n';
            break;
        }
        idx++;
    }
    
    return 0;
}