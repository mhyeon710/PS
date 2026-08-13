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
        int x, y, k;
        cin >> x >> y >> k;
 
        int xcnt = x/k;
        if (x%k) xcnt++;
 
        int ycnt = y/k;
        if (y%k) ycnt++;
 
        if (xcnt > ycnt) cout << xcnt*2-1 << '\n';
        else cout << ycnt*2 << '\n';
    }
    return 0;
}