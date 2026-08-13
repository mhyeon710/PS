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
        
        vector <int> a(N), b(N+1);
        for (int i=0; i<N; i++) cin >> a[i];
        for (int i=0; i<N; i++) cin >> b[i];
 
        int ans = 0;
        for (int i=0; i<N; i++) {
            if (a[i] - b[i+1] > 0)
                ans += a[i] - b[i+1];
        }
 
        cout << ans << '\n';
    }
    return 0;
}