#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    ll a, b;
    cin >> a >> b;

    if (a == b) {
        cout << a;
        return 0;
    }
    
    ll cnt = 0;
    for (ll i=60; i>=0; i--) {
        ll f = (a >> i) & 1;
        ll s = (b >> i) & 1;
        if (f == s) cnt += (f * (1LL << i));
        else break;
    }

    ll ra = a - cnt;
    ll rb = b - cnt;
    if (ra) {
        ll d = 1;
        for (int i=1; i<=63; i++) {
            if (rb >= d && d >= ra) {
                cnt += d;
                break;
            }
            d *= 2;
        }
    }

    cout << cnt;
//     cout << endl;


//     for (int i=60; i>=0; i--) {
//         cout << ((a >> i) & 1);
//     }
// cout << endl;
//     for (int i=60; i>=0; i--) {
//         cout << ((b >> i) & 1);
//     }
// cout << endl;
//     for (ll i=60; i>=0; i--) {
//         cout << ((cnt >> i) & 1LL);
//     }

    
    return 0;
}