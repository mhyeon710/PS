#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
#define MOD     1000000009
using namespace std;

ll dp[100001][4];
int main() {
    fio();

    dp[1][1] = 1;
    dp[2][2] = 1;
    dp[3][1] = 1;
    dp[3][2] = 1;
    dp[3][3] = 1;

    for (int i=4; i<=100000; i++) {
        dp[i][1] = (dp[i-1][2] + dp[i-1][3]) % MOD;
        dp[i][2] = (dp[i-2][1] + dp[i-2][3]) % MOD;
        dp[i][3] = (dp[i-3][1] + dp[i-3][2]) % MOD;
    }
    
    int T; cin >> T;
    for (int i=0; i<T; i++) {
        int x; cin >> x;
        cout << (dp[x][1] + dp[x][2] + dp[x][3]) % MOD << '\n';
    }
    
    return 0;
}