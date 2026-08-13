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
        ll l, r;
        cin >> l >> r;
 
        ll ans = 0;
        ll temp = l;
        while (temp) {
            ans++;
            temp/=3;
        }
 
        ll cnt = 1;
        for (ll i=3; i<=531441; i*=3) {
            if (l > i) {
                cnt++;
                continue;
            }
            if (r+1 > i) {
                ans += (i - l) * cnt;
                cnt++;
                l = i;
            }
            else {
                ans += (r - l + 1) * cnt;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}