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
        int N, Q; cin >> N >> Q;
 
        for (int i=1; i<=N-1; i++) {
            cout << i << ' ' << i+1 << '\n';
        }
 
        int now = N-1;
        for (int i=0; i<Q; i++) {
            int x; cin >> x;
            if (now == x) {
                cout << "-1 -1 -1\n";
            } else {
                cout << N << ' ' << now << ' ' << x << '\n';
                now = x; 
            }
        }
    }
    return 0;
}