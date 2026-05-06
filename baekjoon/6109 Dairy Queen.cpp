#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, C;
    cin >> N >> C;

    vector <int> v(C), dp(N+1, 0);
    for (int i=0; i<C; i++) cin >> v[i];

    dp[0] = 1;
    for (auto c: v) {
        for (int i=c; i<=N; i++)
            dp[i] += dp[i-c];
    }

    cout << dp[N];
    return 0;
}