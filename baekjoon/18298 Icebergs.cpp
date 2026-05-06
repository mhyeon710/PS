#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    ll ans = 0;
    while (T--) {
        int N;
        cin >> N;
        
        vector <pll> v(N);
        for (int i=0; i<N; i++) {
            cin >> v[i].first >> v[i].second;    
        }

        ll temp = 0;
        for (int i=0; i<N-1; i++) {
            temp += v[i].first * v[i+1].second;
            temp -= v[i].second * v[i+1].first;
        }
        temp += v[N-1].first * v[0].second;
        temp -= v[N-1].second * v[0].first;
        ans += abs(temp);
    }
    cout << ans / 2;
    return 0;
}