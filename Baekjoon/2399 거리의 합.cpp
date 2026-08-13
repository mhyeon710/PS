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

    ll ans = 0;
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            ans += abs(v[i] -  v[j]);
        }
    }

    cout << ans;
    return 0;
}