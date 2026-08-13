#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
#define MOD     1000000007
using namespace std;

ll dp[1000001], suma[1000001];
int main() {
    fio();

    ll N; cin >> N;

    dp[0] = 1; suma[0] = 1;
    dp[1] = 2; suma[1] = 3;
    dp[2] = 7; suma[2] = 10;

    for (int i=3; i<=N; i++) {
        dp[i] = (2 * suma[i-1] + dp[i-2]) % MOD;
        suma[i] = (suma[i-1] + dp[i]) % MOD;
    }

    cout << (dp[N]) % MOD;
    return 0;
}