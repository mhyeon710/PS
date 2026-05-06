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
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        ll a, b, c;
        cin >> a >> b >> c;
 
        ll ans = a;
        ans += b/3;
        b = b%3;
 
        if (b == 1) {
            if (c == 0 || c == 1) {
                cout << "-1\n";
                continue;
            }
        }
 
        if (b == 2) {
            if (c == 0) {
                cout << "-1\n";
                continue;
            }
        }
        
        ans += (b+c)/3;
        if ((b+c)%3) ans++;
        cout << ans << '\n';
    }
    return 0;
}