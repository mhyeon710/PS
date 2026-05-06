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
        ll N, a, b, c;
        cin >> N >> a >> b >> c;
 
        ll ans = (N / (a + b + c)) * 3;
        N %= (a + b + c);
 
        if (N == 0) ans += 0;
        else if (N <= a) ans++;
        else if (N <= a+b) ans+=2;
        else ans+=3;
        
        cout << ans << '\n';
    }
    return 0;
}