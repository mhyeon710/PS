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
        ll hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;
 
        bool win = false;
        for (ll i=0; i<=k; i++) {
            ll mopdie = hm / (dc + w*(k-i));
            if (hm % (dc + w*(k-i))) mopdie++;
 
            ll herodie = (hc + a*i) / dm;
            if ((hc + a*i) % dm) herodie++;
 
            if (mopdie <= herodie) {
                win = true;
                break;
            }
        }
 
        if (win) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}