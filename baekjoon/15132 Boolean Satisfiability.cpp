#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

bool pls[100], sub[100];
int main() {
    fio();
    string s; cin >> s;

    if (s.size() == 1 || s.size() == 2) {
        cout << 1;
        return 0;
    }

    for (int i=0; i<s.size(); i++) {
        if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')) {
            if (i > 0 && s[i-1] == '~') sub[s[i]-'A'] = 1;
            else pls[s[i]-'A'] = 1;
        }
    }

    int cnt = 0;
    bool check = false;
    for (int i=0; i<100; i++) {
        if (pls[i] && sub[i]) check = 1;
        if (pls[i] || sub[i]) 
            cnt++;
        
    }

    ll ans = 1;
    for (int i=1; i<=cnt; i++) {
        ans *= 2;
    }


    if (!check) ans--;
    cout << ans;
    return 0;
}