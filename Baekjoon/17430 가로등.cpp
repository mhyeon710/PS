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
        ll N; cin >> N;

        int a, b;
        set <int> x, y;
        for (int i=0; i<N; i++) {
            cin >> a >> b;
            x.insert(a);
            y.insert(b);
        }

        if (N == (ll)x.size() * (ll)y.size()) cout << "BALANCED\n";
        else cout << "NOT BALANCED\n";
    }

    return 0;
}