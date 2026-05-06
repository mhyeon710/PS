#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;

        bool dp[N+1][7];
        memset(dp, 0, sizeof(dp));

        dp[0][1] = 1;
        for (int i=1; i<=N; i++) {
            char a, b;
            int x, y;
            cin >> a >> x >> b >> y;
            for (int j=0; j<7; j++) {
                if (dp[i-1][j]) {
                    if (a == '+') dp[i][(j+x)%7] = 1;
                    if (a == '*') dp[i][(j*x)%7] = 1;
                    if (b == '+') dp[i][(j+y)%7] = 1;
                    if (b == '*') dp[i][(j*y)%7] = 1;
                }
            }
        }

        if (dp[N][0]) cout << "LUCKY\n";
        else cout << "UNLUCKY\n";
    }
    return 0;
}