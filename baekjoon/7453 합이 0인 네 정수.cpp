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

    vector <ll> a(N), b(N), c(N), d(N);
    for (int i=0; i<N; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    vector <ll> v1, v2;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            v1.push_back(a[i]+b[j]);
            v2.push_back(c[i]+d[j]);
        }
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    ll ans = 0;
    for (auto x:v1) {
        auto range = equal_range(v2.begin(), v2.end(), -x);
        ans += distance(range.first, range.second);
    }

    cout << ans;
    return 0;
}