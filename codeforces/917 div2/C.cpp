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
        ll N, K, d;
        cin >> N >> K >> d;
 
        vector <ll> a(N), b(K);
        for (int i=0; i<N; i++) cin >> a[i];
        for (int i=0; i<K; i++) cin >> b[i];
 
        ll ans = 0;
        for (int i=0; i<min(2*N, d); i++) {
            ll tmp = 0;
            for (int j=0; j<N; j++) {
                if (a[j] == j+1)
                    tmp++;
            }
 
            ans = max(ans, tmp + (d-i-1)/2);
 
            for (int j=0; j<b[i%K]; j++) {
                a[j]++;
            }
        }
 
        cout << ans << '\n';
 
    }
    return 0;
}