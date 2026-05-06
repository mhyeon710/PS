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
        int r, c;
        cin >> r >> c;

        if (r == c) cout << "dohoon\n";
        else cout << "jinseo\n" << min(r, c) << ' ' << min(r, c) << '\n';
    }
    return 0;
}