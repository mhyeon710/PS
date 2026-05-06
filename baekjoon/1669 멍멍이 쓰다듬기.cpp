#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    ll X, Y;
    cin >> X >> Y;

    ll diff = Y - X;
    if (diff < 1) {
        cout << 0;
        return 0;
    }

    ll cnt = 0;
    while (cnt * cnt < diff) cnt++;

    if (cnt * cnt - cnt < diff) cout << cnt * 2 - 1;
    else cout << cnt * 2 - 2;
    return 0;
}