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
        int N; cin >> N;
 
        set <char> ss;
        ll ans = 0;
        for (int i=0; i<N; i++) {
            char c; cin >> c;
            ss.insert(c);
            ans += ss.size();
        }
 
        cout << ans << '\n';
    }
    return 0;
}
