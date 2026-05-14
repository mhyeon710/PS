#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int K, N;
    cin >> N >> K;

    map<ll, ll> m;
    for (int i=0; i<N; i++) {
        ll x;
        cin >> x;
        m[x]++;
    }

    vector <ll> v;
    for (auto x:m) {
        v.push_back(x.first * x.second);
        // cout << x.first << ' ' << x.second << endl;
    }

    sort(v.begin(), v.end());

    // for (auto x:v) cout << x << ' ';

    ll ans = 0;
    for (int i=0; i<max(0, int(v.size())-K); i++) ans += v[i];
    
    cout << ans;
    return 0;
}