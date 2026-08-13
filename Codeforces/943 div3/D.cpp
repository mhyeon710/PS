#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        ll N, K, pb, ps, lpb, lps;
        cin >> N >> K >> pb >> ps;
        lpb = pb; lps = ps;
 
        vector <ll> p(N+1), a(N+1);
        for (int i=1; i<=N; i++) cin >> p[i];
        for (int i=1; i<=N; i++) cin >> a[i];
 
        ll sb[N+1], ss[N+1];
        sb[0] = 0; sb[1] = a[pb];
        ss[0] = 0; ss[1] = a[ps];
        for (int i=2; i<=N; i++) {
            sb[i] = sb[i-1] + a[p[pb]];
            pb = p[pb];
            ss[i] = ss[i-1] + a[p[ps]];
            ps = p[ps];
        }
 
 
        ll mb = 0;
        ll ms = 0;
        for (int i=1; i<=min(N, K); i++) {
            mb = max(mb, sb[i] + a[lpb] * (K-i));
            lpb = p[lpb];
            ms = max(ms, ss[i] + a[lps] * (K-i));
            lps = p[lps];
        }
 
        if (mb > ms) cout << "Bodya\n";
        else if (mb < ms) cout << "Sasha\n";
        else cout << "Draw\n";
    }
    return 0;
}