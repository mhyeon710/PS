#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    ll N, K;
    cin >> N >> K;

    vector <ll> v(N);
    for (int i=0; i<N; i++) {
        string s; cin >> s;
        v[i] = stoll(s.substr(0, s.size()-3)) * 100 + stoll(s.substr(s.size()-2, 2));
    }

    ll l = 1, r = 10000000, ans = 0;
    while (l<=r) {
        ll m = (l+r) / 2;

        int cnt = 0;
        for (ll x:v) {
            cnt += x/m;
        }

        if (cnt >= K) {
            ans = m;
            l = m+1;
        } else {
            r = m-1;
        }
    }

    cout.precision(2);
    cout << fixed;
    cout << (double) ans/100;
    return 0;
}