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
        string t = s.substr(0, s.size()-2);
        t += 'i';
        cout << t << '\n';
    }
    return 0;
}