#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

set <pair<int, int>> s;
map <int, int> m;

int main() {
    fio();
    int N; cin >> N;

    int P, L;
    for (int i=0; i<N; i++) {
        cin >> P >> L;
        s.insert({L, P});
        m[P] = L;
    }

    int M; cin >> M;

    string input;
    for (int i=0; i<M; i++) {
        cin >> input;

        if (input == "recommend") {
            int x; cin >> x;

            if (x == -1) {
                auto it = s.begin();
                cout << (*it).second << '\n';
            } else if (x == 1) {
                auto it = s.rbegin();
                cout << (*it).second << '\n';
            }
        } else if (input == "add") {
            cin >> P >> L;

            if (m[P] != 0) {
                pii past = {m[P], P};
                s.erase(past);
            }

            s.insert({L, P});
            m[P] = L;
        } else if (input == "solved") {
            cin >> P;

            pii past = {m[P], P};
            s.erase(past);
            m[P] = 0;
        }
    }
    return 0;
}