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
        vector <int> a(N);
        for (int i=0; i<N; i++) cin >> a[i];
 
        ll ans = 0;
        for (int x=1; x<=10; x++) {
            vector <int> b(N);
            for (int i=0; i<N; i++) {
                b[i] = a[i] > x ? 1 : -1;
            }
 
            int sum = N;
            vector <int> p(N);
            for (int i=0; i<N; i++) {
                p[i] = sum;
                sum += b[i];
            }
 
            sum = N;
            int j = 0;
            vector <int> cnt(2*N + 1);
            for(int i = 0; i < N; i++) {
                if (a[i] == x) {
                    while (j <= i) {
                        cnt[p[j]]++;
                        j++;
                    }
                }
                sum += b[i];
                ans += cnt[sum];
            }
        }
        ans = N * (N+1) / 2 - ans;
        cout << ans << '\n';
    }
    return 0;
}