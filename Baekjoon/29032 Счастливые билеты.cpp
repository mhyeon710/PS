#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    string N, M;
    cin >> N >> M;

    ll n = stol(N);
    ll m = stol(M);

    int ans = 0;
    for (ll i=1; i<=9; i++) {
        ll temp = i;
        for (ll j=1; j<=9; j++) {
            // cout << temp << '\n';
            if (n-m <= temp && temp <= n) ans++;
            temp = temp * 10 + i;
        }
    }

    cout << ans;
    return 0;
}