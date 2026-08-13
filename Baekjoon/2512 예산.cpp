#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    ll N; cin >> N;

    vector <ll> v(N);
    ll suma = 0, maxi = 1;
    for (int i=0; i<N; i++) {
        cin >> v[i];
        suma += v[i];
        maxi = max(maxi, v[i]);
    }

    ll M; cin >> M;

    if (suma <= M) cout << maxi;
    else {
        ll l = 1, r = 1e6, m, ans = maxi;
        while (l <= r){
            m = (l + r) / 2;

            ll temp = 0;
            for (auto x: v) {
                if (x <= m) temp += x;
                else temp += m;
            }

            if (temp <= M) {
                ans = m;
                l = m+1;
            } else {
                r = m-1;
            }
        }

        cout << ans;
    }
    
    return 0;
}