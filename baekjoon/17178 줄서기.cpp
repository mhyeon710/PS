#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <string> v, sorted;
    for (int i=0; i<5*N; i++) {
        string s, ns; cin >> s;

        if (s.size() == 3) ns = s.substr(0, 2) + "00" + s.substr(2, 1);
        else if (s.size() == 4) ns = s.substr(0, 2) + "0" + s.substr(2, 2);
        else ns = s;

        v.push_back(ns);
        sorted.push_back(ns);
    }

    reverse(v.begin(), v.end());
    sort(sorted.begin(), sorted.end());
    
    bool good = true;
    stack <string> st;
    for (int i=0; i<5*N; i++) {
        if (!st.empty() && st.top() == sorted[i]) {
            st.pop();
            continue;
        }

        if (v.empty()) {
            good = false;
            break;
        }

        bool found = false;
        while (!v.empty()) {
            if (v.back() == sorted[i]) {
                v.pop_back();
                found = true;
                break;
            } else {
                st.push(v.back());
                v.pop_back();
            }
        }

        if (!found) {
            good = false;
            break;
        }
    }

    if (good) cout << "GOOD";
    else cout << "BAD";
    return 0;
}