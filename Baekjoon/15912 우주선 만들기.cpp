#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <ll> w(N), e(N), dp(N);
    for (int i=0; i<N; i++) cin >> w[i];
    for (int i=0; i<N; i++) cin >> e[i];

    dp[0] = w[0] * e[0];
    for (int i=1; i<N; i++) {

        for (int j=0; j<=i; j++) {
            ll x = 0, y = 0;
            for (int k=j; k<=i; k++) {
                x = max(x, w[k]);
                y = max(y, e[k]);
            }

            if (j == 0) dp[i] = x * y;
            else dp[i] = min(dp[i], dp[j-1] + x * y);
        }
    }

    cout << dp[N-1];
    return 0;
}