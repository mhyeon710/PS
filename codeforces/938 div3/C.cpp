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
        ll N, K;
        cin >> N >> K;
 
        vector <ll> v(N);
        for (int i=0; i<N; i++)
            cin >> v[i];
 
        ll lk = K/2 + K%2;
        ll rk = K/2;
 
        for (int i=0; i<N; i++) {
            if (lk >= v[i]) {
                lk -= v[i];
                v[i] = 0;
            }
            else {
                v[i] -= lk;
                break;
            }
        }
 
        for (int i=N-1; i>=0; i--) {
            if (rk >= v[i]) {
                rk -= v[i];
                v[i] = 0;
            }
            else {
                v[i] -= rk;
                break;
            }
        }
 
        int ans = 0;
        for (int i=0; i<N; i++) {
            if (v[i] <= 0)
                ans++;
        }
 
        cout << ans << '\n';
    }
    return 0;
}