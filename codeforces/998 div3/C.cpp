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
        int N, K;
        cin >> N >> K;
 
        map <int, int> m;
        for (int i=0; i<N; i++) {
            int x; cin >> x;
            m[x]++;
        }
 
        int ans = 0;
        for (auto it=m.begin(); it!=m.end(); it++) {
            int a = it->first;
            if (K-a == a) {
                ans += m[a] / 2;
                continue;
            }
            if (m[K-a] <= 0 || m[a] <= 0) continue; 
            if (m[K-a] >= m[a]) {
                ans += m[a];
                m[K-a] -= m[a];
                m[a] = 0;
            }
            else {
                ans += m[K-a];
                m[a] -= m[K-a];
                m[K-a] = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}