#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define INF     0x7fffffff
#define LLINF   0x7f7f7f7f7f7f
#define MOD     1000000007
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N, K; cin >> N >> K;
        
        vector <ll> v(N), dp(N);
        cin >> v[0];
        dp[0] = v[0];
        for (int i=1; i<N; i++) {
            cin >> v[i];
            
            if (dp[i-1] + v[i] > v[i])
                dp[i] = dp[i-1] + v[i];
            else
                dp[i] = v[i];
        }
        
        ll maxi = 0;
        for (int i=0; i<N; i++)
            maxi = max(maxi, dp[i]);
        
        ll temp = maxi;
        ll sum = 0;
        for (int i=0; i<K; i++) {
            sum += temp % MOD;
            temp = (temp*2) % MOD; 
        }
 
        ll asum = 0;
        for (int i=0; i<N; i++)
            asum += v[i];
 
        sum = sum + asum;
        if (sum < 0) cout << sum%MOD + MOD << '\n';
        else cout << sum%MOD << '\n';
    }
    return 0;
}