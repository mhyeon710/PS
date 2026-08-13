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
        ll N, M;
        cin >> N >> M;
 
        ll ans = 0;
        vector <ll> v;
        for (int i=0; i<N; i++) {
            ll now = 0;
            for (int j=0; j<M; j++) {
                ll x; cin >> x;
                now += x;
                ans += now;
            }            
            v.push_back(now);
        }
        
        sort(v.rbegin(), v.rend());
        
        for (int i=0; i<N-1; i++) {
            ans += v[i] * (N-1-i) * M;
        }
        
        cout << ans << '\n';
    }
    return 0;
}