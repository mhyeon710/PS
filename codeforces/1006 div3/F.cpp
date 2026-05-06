
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
 
        for (int i=1; i<=n; i++) {
            int idx = i - 1;
            if ((idx & (n - 1)) == idx)
                cout << k << " ";
            else
                cout << 0 << " ";
        }
        cout << '\n';
    }
 
    return 0;
}