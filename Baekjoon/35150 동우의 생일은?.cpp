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
        ll A, B, N;
        cin >> A >> B >> N;

        ll ans = (A*(N/2)+B*(N/2)+A*(N%2)) * (A*(N/2)+B*(N/2)+B*(N%2));
        cout << ans << '\n';
    }
    return 0;
}