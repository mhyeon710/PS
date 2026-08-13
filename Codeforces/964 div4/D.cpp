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
        string s, t;
        cin >> s >> t;
 
        int now = 0;
        int ssize = s.size();
        int tsize = t.size();
        for (int i=0; i<ssize; i++) {
            if (s[i] == '?') {
                if (now < tsize) {
                    s[i] = t[now];
                    now++;
                }
                else {
                    s[i] = 'a';
                }
                continue;
            }
            if (s[i] == t[now]) {
                now++;
            }
        }
        if (now == tsize) {
            cout << "YES\n" << s << '\n';
        }
        else cout << "NO\n";
    }
    return 0;
}