#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

vector <int> dp(1111, 1e9);
int C, N, maxi, c, p;
int main() {
    fio();
    cin >> C >> N;

    for (int i=0; i<N; i++) {
        cin >> c >> p;
        int tc = c, tp = p;
        while (1) {
            dp[tp] = min(dp[tp], tc);
            tc += c; tp += p;
            if (tp > C) break;
        }
        maxi = max(maxi, p);
    }

    for (int i=2; i<=C+maxi; i++) {
        for (int j=1; j<=i/2; j++) {
            dp[i] = min(dp[i], dp[j] + dp[i-j]);
        }
    }

    // for (int i=2; i<=C+maxi; i++) {
    //     cout << i << ' ' << dp[i] << endl;
    // }

    int ans = 1e9;
    for (int i=C; i<=C+100; i++) {
        ans = min(ans, dp[i]);
    }

    cout << ans;
    return 0;
}