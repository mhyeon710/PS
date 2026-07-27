#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;

    while (T--) {
        ll x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        ll dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        ll max_radi = (r1 + r2) * (r1 + r2);
        ll min_radi = (r1 - r2) * (r1 - r2);
        if (min_radi <= dist && dist <= max_radi) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}