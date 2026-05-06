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
        ll N, M; cin >> N >> M;
 
        vector <ll> a(N), b(N);
        for (int i=0; i<N; i++) cin >> a[i];
        for (int i=0; i<N; i++) cin >> b[i];
 
        ll ans = 0;
        for (int i=M; i<N; i++)  ans += min(a[i], b[i]);
        
        ll mini = a[M-1];
        ll s = a[M-1];
        for (int i=M-2; i>=0; i--) {
            s = s - a[i+1] + b[i+1] + a[i];
            if (mini > s)
                mini = s;
        }
        cout << ans + mini << '\n';
 
    }
    return 0;
}