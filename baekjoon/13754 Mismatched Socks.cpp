#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    ll suma = 0;
    ll maxi = 0;

    for (int i=0; i<N; i++) {
        ll x; cin >> x;
        suma += x;
        maxi = max(x, maxi);
    }

    ll res = suma - maxi;
    if (maxi > res) cout << res;
    else cout << suma/2;
    
    return 0;
}