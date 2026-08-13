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
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
 
        ll ans = 0;
        ll kn = 1;
        while (l1 * kn <= r2) {
            ll left = max(l1 * kn, l2);
            ll right = min(r1 * kn , r2);
 
            if (left % kn) {
                left /= kn;
                left++;
            }
            else left /= kn;
 
            right /= kn;
 
            if (right - left + 1 > 0)
                ans += right - left + 1;
 
            kn *= k;
        }
        cout << ans << '\n';
    }
    return 0;
}