#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
int main() {
    fio();
    ll K, N;
    cin >> K >> N;

    vector <ll> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    ll lcm = v[0] * v[1] / gcd(v[0], v[1]);
    for (int i=2; i<N; i++) {
        lcm = lcm * v[i] / gcd(lcm, v[i]);
    }

    cout << lcm - K;
    return 0;
}