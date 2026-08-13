#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

string s;

bool pseudo(int l, int r, bool can_del) {
    if (l > r) return 1;

    if (s[l] == s[r]) return pseudo(l+1, r-1, can_del);
    else if (can_del) return (pseudo(l, r-1, 0) | pseudo(l+1, r, 0));
    else return 0;
}

int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        cin >> s;

        bool palin = false;
        int ssize = s.size();
        for (int i=0; i<(ssize/2+ssize%2); i++) {
            if (s[i] != s[ssize-1-i]) break;
            if (i == (ssize/2+ssize%2)-1) palin = 1;
        }

        if (palin) {
            cout << 0 << '\n';
            continue;
        }

        if (pseudo(0, ssize-1, 1)) {
            cout << 1 << '\n';
            continue;
        }

        cout << 2 << '\n';
    }
    return 0;
}