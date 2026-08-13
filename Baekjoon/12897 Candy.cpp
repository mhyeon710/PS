#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
#define MOD     1000000007
using namespace std;

int main() {
    fio();
    ll N;
    cin >> N;

    ll ans = 1;
    for (int i=1; i<=N; i++) {
        ans = (ans * 3) % MOD;
    }

    cout << ans-1;
    return 0;
}