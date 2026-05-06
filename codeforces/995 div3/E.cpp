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
        ll N, K;
        cin >> N >> K;
 
        vector <ll> a(N), b(N), v(2*N);
        for (int i=0; i<N; i++) cin >> a[i];
        for (int i=0; i<N; i++) cin >> b[i];
        for (int i=0; i<2*N; i++) v[i] = i<N ? a[i] : b[i-N];
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(v.begin(), v.end());
 
        ll ans = 0;
        for (int i=0; i<2*N; i++) {
            int cust = b.end() - lower_bound(b.begin(), b.end(), v[i]);
            int good = a.end() - lower_bound(a.begin(), a.end(), v[i]);
            int bad = cust - good;
            if (bad <= K) {
                ans = max(ans, v[i] * cust);
            }
        }
 
        cout << ans << '\n';
    }
    return 0;
}