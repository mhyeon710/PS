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
        uint32_t x, y;
        cin >> x >> y;

        bool can = false;
        for (uint32_t i=x; i>=0; i/=2) {
            uint32_t t=i;
            for (int cnt=0; cnt<=100; cnt++) {
                if (t == y) {
                    can = true;
                    break;
                }
                t *= 2;
            }
            if (can || i == 0) break;
        }

        if (can) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}