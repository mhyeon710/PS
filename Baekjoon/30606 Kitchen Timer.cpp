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
        ll x;
        cin >> x;

        int ans = 0;
        while (1) {
            ll now = 1;
            while (1) {
                if ((now<<1)-1 > x) break;
                now = (now<<1);
            }
            
            x -= (now-1);
            if (x == 0) break;

            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}