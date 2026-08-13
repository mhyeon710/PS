#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    fio();
    int N; cin >> N;

    int ans = 1e9;
    for (int i=0; i<N; i++) {
        int y, a, b;
        cin >> y >> a >> b;
        y += a * b / gcd(a, b);
        ans = min(ans, y);
    }
    cout << ans;
    return 0;
}