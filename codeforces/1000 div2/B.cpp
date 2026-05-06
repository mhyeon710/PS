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
        ll N, l, r, x;
        cin >> N >> l >> r;
 
        vector <ll> left, mid, right;
        for (int i=1; i<=l-1; i++) {
            cin >> x;
            left.push_back(x);
        }
        
        ll ans = 0;
        for (int i=l; i<=r; i++) {
            cin >> x;
            ans += x;
            mid.push_back(-x);
        }
 
        for (int i=r+1; i<=N; i++) {
            cin >> x;
            right.push_back(x);
        }
 
        sort(left.begin(), left.end());
        sort(mid.begin(), mid.end());
        sort(right.begin(), right.end());
 
        ll lsum = 0;
        for (int i=0; i<r-l+1; i++) {
            if (left.size() == i) break;
            if ((-1) * mid[i] > left[i]) {
                lsum += (-1) * mid[i] - left[i];
            } else break;
        }
 
        ll rsum = 0;
        for (int i=0; i<r-l+1; i++) {
            if (right.size() == i) break;
            if ((-1) * mid[i] > right[i]) {
                rsum += (-1) * mid[i] - right[i];
            } else break;
        }
 
        // cout << left.size() + right.size() + mid.size() << ' ' << ans << ' ' << lsum << ' ' << rsum << '\n';
 
        cout << ans - max(lsum, rsum) << '\n';
    }
    return 0;
}