#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int a, d, k;
    cin >> a >> d >> k;

    int ans = 0;
    for (int i=1; i<=1e6+1e4; i++) {
        if ((a + (i-1) * d) == k) {
            ans = i;
            break;
        }
    }

    if (!ans) cout << 'X';
    else cout << ans;
    return 0;
}