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
        int N, K, Q;
        cin >> N >> K >> Q;
 
        vector <pll> v(K+1);
        for (int i=1; i<=K; i++) cin >> v[i].first;
        for (int i=1; i<=K; i++) cin >> v[i].second;
        sort(v.begin(), v.end());
 
        vector <ll> d(K+1), t(K+1);
        for (int i=1; i<=K; i++) d[i] = v[i].first;
        for (int i=1; i<=K; i++) t[i] = v[i].second;
 
        for (int i=0; i<Q; i++) {
            ll x; cin >> x;
            int a = lower_bound(d.begin(), d.end(), x) - d.begin()-1;
            if (a<0) a=0;
            if (x == d[a]) cout << t[a] << ' ';
            else {
                cout << t[a] + (x-d[a]) * (t[a+1] - t[a]) / (d[a+1] - d[a]) << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}