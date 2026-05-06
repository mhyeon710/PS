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
        int m, a, b, c;
        cin >> m >> a >> b >> c;
 
        int f = min(m, a);
        int s = min(m ,b);
        int ans = f + s + min(2*m - f - s, c);
        cout << ans << '\n';
    }
    return 0;
}