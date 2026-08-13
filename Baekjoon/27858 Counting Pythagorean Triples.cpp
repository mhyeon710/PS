#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
#define MAX     3125000
using namespace std;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    fio();
    ll N; cin >> N;
    
    int a = 0, b = 0, c = 0, d = 0;
    for (int i=1; i<=N; i++) {
        if (i*i > N*N - i*i) break;
        
        int y = N*N - i*i;
        int j = round(sqrt(y));

        if (j*j == y) {
            int one = gcd(i, j);
            int two = gcd(i, N);
            int three = gcd(j, N);
            if (one == 1 && two == 1 && three == 1) a++;
            else b++;
        }
    }

    for (ll i=1; i<=MAX; i++) {
        ll y = N*N + i*i;
        ll j = round(sqrt(y));

        if (j*j == y) {
            ll one = gcd(i, j);
            ll two = gcd(i, N);
            ll three = gcd(j, N);
            if (one == 1 && two == 1 && three == 1) c++;
            else d++;
        }
    }

    cout << a << ' ' << b << ' ' << c << ' ' << d;
    return 0;
}