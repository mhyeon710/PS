#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int dp[1001];
int main() {
    fio();
    int N; cin >> N;

    vector <int> v(N+1, 0);
    for (int i=1; i<=N; i++) cin >> v[i];
    for (int i=1; i<=N; i++) {
        for (int j=i; j>=1; j--) {
            dp[i] = max(dp[i], v[j] + dp[i-j]);
        }
    }

    cout << dp[N];
    return 0;
}

// dp[1] = v[1] + dp[0];
// dp[2] = v[2] + dp[0] | v[1] + dp[1]
// dp[3] = v[3] + dp[0] | v[2] + dp[1] | v[1] + dp[2]
// dp[4] = v[4] + dp[0] | v[3] + dp[1] | v[2] + dp[2] | v[1] + dp[3]
// dp[5] = v[5] + dp[0] | v[4] + dp[1] | v[3] + dp[2] | v[2] + dp[3] | v[1] + dp[4]

