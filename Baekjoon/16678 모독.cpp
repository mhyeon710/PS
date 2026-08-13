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
    for (int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    ll now = 1;
    ll ans = v[0] - 1;
    v[0] = 1;
    for (int i=1; i<N; i++) {
        if (v[i] == v[i-1]) continue;

        if (v[i] == v[i-1] + 1) {
            now = v[i];
        } else {
            now++;
            ans += v[i] - now;
            v[i] = now;
        }
    }

    cout << ans;
    return 0;
}