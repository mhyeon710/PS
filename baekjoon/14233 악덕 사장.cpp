#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N;
    cin >> N;

    vector <ll> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    ll ans = 1;
    ll l = 1, r = 1e9, m;
    while (l <= r) {
        m = (l + r) / 2;

        bool can = true;
        for (int i=1; i<=N; i++) {
            if (m * i > v[i-1]) {
                can = false;
                break;
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