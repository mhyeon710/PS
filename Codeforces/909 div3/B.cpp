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
 
        vector <ll> v(N);
        for (int i=0; i<N; i++) {
            cin >> v[i];
        }   
 
 
        ll ans = 0;
        for (int i=1; i*i<=N; i++) {
            if (N % i) continue;
 
            int idx = i;
            vector <ll> prefix;
            for (int j=0; j<N; j+=idx) {
                ll sum = 0;
                for (int k=0; k<idx; k++) {
                    sum += v[j+k];
                }
                prefix.push_back(sum);
            }
            sort(prefix.begin(), prefix.end());
            ans = max(ans, prefix[prefix.size()-1] - prefix[0]);
 
            idx = N/i;
            prefix.clear();
            for (int j=0; j<N; j+=idx) {
                ll sum = 0;
                for (int k=0; k<idx; k++) {
                    sum += v[j+k];
                }
                prefix.push_back(sum);
            }
            sort(prefix.begin(), prefix.end());
            ans = max(ans, prefix[prefix.size()-1] - prefix[0]);
        }
 
        cout << ans << '\n';
    }
    return 0;
}