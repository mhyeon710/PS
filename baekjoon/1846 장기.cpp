#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;
    if (N == 3) cout << -1;
    else if (N%2) {
        for (int i=2; i<=N/2 + 1; i++) {
            cout << i << '\n';
        }
        cout << 1 << '\n' << N << '\n';
        for (int i=N/2+2; i<=N-1; i++) {
            cout << i << '\n';
        }
    } else {
        for (int i=N-2; i>=1; i--) {
            cout << i << '\n';
        }
        cout << N << '\n' << N-1 << '\n';
    }
    return 0;
}