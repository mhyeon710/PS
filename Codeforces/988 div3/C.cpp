
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
        int N; cin >> N;
        if (N <= 4) {
            cout << -1 << '\n';
            continue;
        }
 
        for (int i=1; i<=N; i+=2) {
            if (i == 5) continue;
            cout << i << ' ';
        }
        cout << 5 << ' ' << 4 << ' ';
        for (int i=2; i<=N; i+=2) {
            if (i == 4) continue;
            cout << i << ' ';
 
        }
        cout << '\n';
    }
    return 0;
}