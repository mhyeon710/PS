#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;

    
    for (int i=1; i<=T; i++) {
        long double ans, B, L, N;
        cin >> B >> L >> N;

        cout << fixed;
        cout.precision(12);
        cout << "Case #" << i << ": " << ans << '\n';
    }
    return 0;
}