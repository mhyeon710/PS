#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll      long long
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    
    ll N, K;
    cin >> N >> K;

    vector <ll> v;
    v.resize(N+1);
    ll mini = 2e18;
    for (int i=1; i<=N; i++) {
        cin >> v[i];
        mini = min(mini, v[i]);
    }
    
    ll l = mini, r = 2e18, ans = mini;
    while (l <= r) {
        ll m = (l+r)/2;

        ll cnt = 0;
        bool can = true;
        for (int i=1; i<=N; i++) {
            if (m <= v[i]) continue;

            ll diff = m - v[i];
            cnt += diff / i;
            if (diff % i) cnt++;

            if (cnt > K) can = false;
        }
        
        if (cnt <= K && can) {
            l = m+1;
            ans = m;
        } else {
            r = m-1;
        }
    }

    cout << ans;
    return 0;
}