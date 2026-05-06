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
        int N, M;
        cin >> N >> M;
 
        int x1, y1, x2, y2;
        cin >> x1 >> y1;
        x2 = x1 + M;
        y2 = y1 + M;
        for (int i=1; i<N; i++) {
            int x, y;
            cin >> x >> y;
            x2 += x;
            y2 += y;         
        }
        cout << 2 * (x2 - x1 + y2 - y1) << '\n';
    }
    return 0;
}