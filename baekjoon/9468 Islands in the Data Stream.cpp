#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    for (int t=1; t<=T; t++) {
        int x; cin >> x;
        
        vector <int> v(15);
        for (int i=0; i<15; i++) {
            cin >> v[i];
        }
        
        int ans = 0;
        for (int i=1; i<15; i++) {
            if (v[i-1] > v[i]) {
                ans++;                
            }
        }

        cout << t << ' ' << ans << '\n';
    }
    return 0;
}