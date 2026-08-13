#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        string s; cin >> s;
        vector <int> v(26, 0);

        bool can = true;
        int ssize = s.size();
        for (int i=0; i<ssize; i++) {
            char c = s[i] - 'A';
            v[c]++;
            if (v[c]%4 == 3) {
                if (i == ssize-1) {
                    can = false;
                    break;
                } else if (s[i] != s[i+1]) {
                    can = false;
                    break;
                }
            }
        }

        if (can) cout << "OK\n";
        else cout << "FAKE\n";
    }
    return 0;
}