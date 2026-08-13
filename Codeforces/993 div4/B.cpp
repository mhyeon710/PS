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
 
        for (int i=s.size()-1; i>=0; i--) {
            if (s[i] == 'p') cout << 'q';
            else if (s[i] == 'q') cout << 'p';
            else cout << 'w';
        }
        cout << '\n';
    }
    return 0;
}