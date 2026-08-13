#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    while (T-- ) {
        ll N, K;
        cin >> N >> K;

        N--;

        ll l = 1, r = 5000, m, i;
        while (l <= r) {
            m = (l + r) / 2;
            if (K * m * (m + 1) >= N * 2) {
                i = m;
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }

        // cout << i << '\n';

        if (i%2) {
            cout << ((-1)*(i/2)*K) + N - (((i-1)*i/2)*K) << ' ';
            if (i*K == abs(N - (((i-1)*i/2)*K))) cout << "L\n";
            else cout << "R\n";
        } else {
            cout << ((i/2)*K) - N + (((i-1)*i/2)*K) << ' ';
            if (i*K == abs(N - (((i-1)*i/2)*K))) cout << "R\n";
            else cout << "L\n";
        }

    }
    return 0;
}