#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;

    int ans = 0;
    for (int i=0; i<5; i++) {
        int x; cin >> x;
        if (x == T) ans++;
    }

    cout << ans;
    return 0;
}