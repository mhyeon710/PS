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
 
        int cnt[21];
        memset(cnt, 0, sizeof(cnt));
        vector <int> v;
        for (int i=0; i<N; i++) {
            int x; cin >> x;
            cnt[x]++;
        }
 
        int ans = 0;
        for (int i=1; i<=20; i++) {
            ans += (cnt[i]/2);
        }
        cout << ans << '\n';
    }
 
    return 0;
}
