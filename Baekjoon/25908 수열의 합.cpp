#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int S, T;
    cin >> S >> T;

    ll ans = 0;
    for (int i=1; i<=T; i++) {
        ans += (T/i - S/i) * (i%2 == 0 ? 1 : -1);
        if (S%i == 0) ans += (i%2 == 0 ? 1 : -1);
    }

    cout << ans;
    return 0;
}