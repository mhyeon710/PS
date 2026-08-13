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
        ll N; cin >> N;

        ll ans = 0;
        ll now = 2;
        while (1) {
            ll sum = now * (now+1) / 2;
            if (sum > N) break;
            if ((N - sum) % now == 0) ans++;
            now++;
        }
        cout << ans << '\n';
    }
    return 0;
}