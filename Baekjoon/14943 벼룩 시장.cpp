#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <ll> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    ll ans = 0;
    int i1 = 0, i2 = 0;
    while (1) {
        if (i1 == N && i2 == N) break;
        while (i1 < N && v[i1] <= 0) i1++;
        while (i2 < N && v[i2] >= 0) i2++;
        ll mini = min(v[i1], -v[i2]);
        ans += mini * abs(i1 - i2);
        v[i1] -= mini;
        v[i2] += mini;
    }

    cout << ans;
    return 0;
}