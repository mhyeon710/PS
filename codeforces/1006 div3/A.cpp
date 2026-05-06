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
        int n, k, p;
        cin >> n >> k >> p;
    
        if (k < 0) k *= -1;
 
        int ans = k / p;
        if (k % p) ans++;
 
        if (ans > n) cout << -1 << '\n';
        else cout << ans << '\n';
    }
    return 0;
}