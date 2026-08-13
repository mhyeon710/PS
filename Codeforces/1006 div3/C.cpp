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
        ll n, x;
        cin >> n >> x;
 
        if (x == 0) {
            for (int i=0; i<n; i++) cout << 0 << ' ';
            cout << '\n';
            continue;
        }
 
        int tmp = 0;
        for (int i=0; i<n; i++) {
            tmp |= i;
        }
 
        if (tmp == x) {
            for (int i=0; i<n; i++) {
                cout << i << ' ';
            }
            cout << '\n';
            continue;
        }
 
        ll limit = 1;
        while (limit & x) {
            limit *= 2;
        }
 
        cout << x << ' ';
        for (int i=0; i<n-1; i++) {
            if (i < limit) cout << i << ' ';
            else cout << 0 << ' ';
        }
        cout << '\n';
    }
    return 0;
}