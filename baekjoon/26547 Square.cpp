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
        cout << s << '\n';

        if (s.size() == 1) continue;
        
        for (int i=1; i<s.size()-1; i++) {
            cout << s[i];
            for (int j=1; j<s.size()-1; j++) cout << ' ' ;
            cout << s[s.size()-1-i] << '\n';
        }
        reverse(s.begin(), s.end());
        cout << s << '\n';
    }
    return 0;
}