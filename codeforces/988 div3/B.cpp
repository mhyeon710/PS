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
 
        map <int, int> m;
        for (int i=0; i<N; i++) {
            int x; cin >> x;
            m[x]++;
        }
 
        int grid = N-2;
        for (int i=1; i*i<=grid; i++) {
            if (grid % i) continue;
            int a = i;
            int b = grid/i;
            if (a == b) {
                if (m[a] >= 2) {
                    cout << a << ' ' << b << '\n';
                    break;
                }
            }
            else {
                if (m.find(a) == m.end()) continue;
                if (m.find(b) == m.end()) continue;
                cout << a << ' ' << b << '\n';
                break; 
            }
        }
    }
    return 0;
}