#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    ll maxi = 0;
    vector <ll> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i];
        maxi = max(maxi, v[i]);
    }
    v.push_back(maxi);

    ll ans = 0;
    for (int i=1; i<N+1; i++) {
        if (v[i] > v[i-1]) {
            ans += v[i] - v[i-1];
        }
    }

    cout << ans;
    return 0;
}