#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    ll N; cin >> N;

    if (N == 0) {
        cout << 1;
        return 0;
    }
    
    ll ans = 1;
    for (ll i=1; i<=N; i++) {
        ans *= i;
    }

    cout << ans;
    return 0;
}