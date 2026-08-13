#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    vector <pll> v(M);
    for (int i=0; i<M; i++) {
        ll a, b;
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    ll l = 1, r = 1e18, m, ans = 1;
    while (l <= r) {
        m = (l + r) / 2;

        ll cnt = 0;
        ll now = v[0].first;
        bool can = false;
        for (int i=0; i<M; i++) {
            auto [s, e] = v[i];

            while (s <= now && now <= e) {
                cnt++;
                now += m;
            }

            if (cnt >= N) {
                can = true;
                break;
            }

            if (i < M-1) {
                now = max(v[i+1].first, now);
            }
        }

        if (can) {
            ans = m;
            l = m+1;
        } else {
            r = m-1;
        }
    }

    cout << ans;
    return 0;
}