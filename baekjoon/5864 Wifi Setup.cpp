#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    ll N, A, B;
    cin >> N >> A >> B;

    vector<ll> v(N);
    for (int i=0; i<N; i++) cin >> v[i];
    sort(v.begin(), v.end());

    vector <ll> dp(N+1, 1e18);
    dp[0] = 0;
    
    for (int i=1; i<=N; i++) {
        for (int j=0; j<i; j++) {
            ll cost = 2 * A + B * (v[i-1] - v[j]);
            dp[i] = min(dp[i], dp[j] + cost);
        }
    }

    if (dp[N] % 2) cout << dp[N] / 2 << ".5";
    else cout << dp[N] / 2;

    return 0;
}