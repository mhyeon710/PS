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
        int N; cin >> N;
 
        vector <ll> v(N);
        for (int i=0; i<N; i++)
            cin >> v[i];
        
        map<pair<pll, ll>, ll> m1, m2, m3;
        for (int i=0; i<N-2; i++) {
            m1[{{v[i], v[i+1]}, v[i+2]}]++;
            m2[{{v[i], v[i+2]}, v[i+1]}]++;
            m3[{{v[i+1], v[i+2]}, v[i]}]++;
        }
 
        ll ans = 0;
        for (auto it = m1.begin(); next(it) != m1.end(); ++it) {
            auto current = it;
            auto nx = next(it);
            if (current->first.first.first == nx->first.first.first) {
                if (current->first.first.second == nx->first.first.second) {
                    if (current->first.second != nx->first.second) {
                        ans += current->second*nx->second;
                    }
                }
            }
        }
 
        for (auto it = m2.begin(); next(it) != m2.end(); ++it) {
            auto current = it;
            auto nx = next(it);
            if (current->first.first.first == nx->first.first.first) {
                if (current->first.first.second == nx->first.first.second) {
                    if (current->first.second != nx->first.second) {
                        ans += current->second*nx->second;
                    }
                }
            }
        }
 
        for (auto it = m3.begin(); next(it) != m3.end(); ++it) {
            auto current = it;
            auto nx = next(it);
            if (current->first.first.first == nx->first.first.first) {
                if (current->first.first.second == nx->first.first.second) {
                    if (current->first.second != nx->first.second) {
                        ans += current->second*nx->second;
                    }
                }
            }
        }
 
        cout << ans << '\n';
    }
    return 0;
}