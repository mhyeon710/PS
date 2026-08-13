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
        
        map<ll, ll> m;
        vector <ll> v(N);
        for (int i=0; i<N; i++) {
            ll x; cin >> x;
            v[i] = x;
            m[x]++;
        }
 
        ll ans = 0;
        for (auto it=m.begin(); it!=m.end(); it++) {
            ans += (it->second) * (it->second-1) / 2;
        }
 
        ll one = 0;
        for (int i=0; i<N; i++) {
            if (v[i] == 2) {
                ans += one;
            } else if (v[i] == 1) {
                one++;
            }
        }
 
        ll two = 0;
        for (int i=0; i<N; i++) {
            if (v[i] == 1) {
                ans += two;
            } else if (v[i] == 2) {
                two++;
            }
        }
 
        cout << ans << '\n';
    }
    return 0;
}
