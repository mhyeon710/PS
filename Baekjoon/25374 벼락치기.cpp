#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    ll N;
    cin >> N;
    if (N >= 28) {
        ll ans = N/7;
        if (N % 7) ans++;
        cout << ans + 3;
    } else {
        for (int i=1; i<=7; i++) {
            int tmp = 0;
            for (int j=i; j>=1; j--) {
                tmp += j;
            }
            if (tmp >= N) {
                cout << i;
                break;
            }
        }
    }
    return 0;
}