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
 
        ll dp[N+1], arr[N+1];
        memset(dp, 0, sizeof(dp));
        memset(arr, 0, sizeof(arr));
        for (int i=0; i<N; i++) {
            cin >> arr[i];
            dp[i] = arr[i];
        }
 
        for (int i=1; i<N; i++) {
            if (abs(arr[i])%2 ^ abs(arr[i-1])%2 == 1) {
                dp[i] = max(dp[i], dp[i-1] + arr[i]);
            }
        }
 
 
        ll ans = -1e18;
        for (int i=0; i<N; i++) {
            ans = max(ans, dp[i]);
        }
 
        cout << ans << '\n';
    }
    return 0;
}