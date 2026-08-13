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
        ll n, k; 
        cin >> n >> k;
 
        ll init = ((k+n-1) * (k+n) / 2) - ((k-1) * k / 2);
 
        ll l, r, m, mini, ans;
        l = k;
        r = k+n-1;
        m = l;
        ans = m;
        mini = init;
        while (l <= r) {
            m = (l+r)/2;
            ll sum = ((k+n-1) * (k+n) / 2) - (m * (m+1) / 2);
            ll temp = init - 2*sum;
 
            if (temp == 0) {
                ans = m;
                mini = 0;
                break;
            } else if (temp < 0) {
                l = m+1;
            } else {
                r = m-1;
            }
            
            if (abs(temp) < mini) {
                ans = m;
                mini = abs(temp);
            }
        }
        cout << mini << '\n';
    }
    return 0;
}