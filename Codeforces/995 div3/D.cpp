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
        ll N, x, y;
        cin >> N >> x >> y;
 
        ll sum = 0;
        vector <ll> v(N);
        for (int i=0; i<N; i++) {
            cin >> v[i];
            sum += v[i];
        }
 
        sort(v.begin(), v.end());
 
        ll ans = 0;
        for (int i=0; i<N; i++) {
            int min_idx = lower_bound(v.begin(), v.end(), sum - v[i] - y) - v.begin();
            if (min_idx <= i) min_idx = i+1;
            int max_idx = upper_bound(v.begin(), v.end(), sum - v[i] - x) - v.begin();
            if (max_idx <= i) max_idx = i+1;
 
            ans += max(0, max_idx - min_idx);
        }
        cout << ans << '\n';
    }
    return 0;
}