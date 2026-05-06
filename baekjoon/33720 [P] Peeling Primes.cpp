#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

bool p[1000001];
int main() {
    fio();
    
    vector <ll> prime;

    for (ll i=2; i<=1e6; i++) {
        for (ll j=i*i; j<=1e6; j+=i) {
            p[j] = 1;
        }
    }

    for (int i=2; i<=1e6; i++) {
        if (!p[i]) prime.push_back(i);
    }

    ll N; cin >> N;

    for (auto x:prime) {
        if (N%x == 0) {
            if (N%2) cout << (N-x)/2 + 1;
            else cout << N/2;
            return 0;
        }
    }

    cout << 1;
    return 0;
}