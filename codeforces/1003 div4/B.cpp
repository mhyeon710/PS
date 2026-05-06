
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
 
        bool check = false;
        for (int i=0; i<s.size(); i++) {
            if (s[i] == s[i+1]) {
                check = true;
                break;
            }
        }
 
        if (check) cout << 1 << '\n';
        else cout << s.size() << '\n';
    }
    return 0;
}