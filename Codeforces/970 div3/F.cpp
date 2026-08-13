#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
#define MOD     1000000007
using namespace std;
 
ll exEuclid(ll a, ll b, ll &s, ll &t) {
	if (b == 0) {
		s = 1; t = 0;
		return a;
	}
	ll gcd = exEuclid(b, a%b, s, t);
	ll temp = t;
	t = s - (a / b)*t;
	s = temp;
 
	if (s <= 0) {
		s += b;
		t -= a;
	}
	return gcd;
}
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        ll N; cin >> N;
 
        ll sum = 0;
        vector <ll> v;
        for (int i=0; i<N; i++) {
            ll x; cin >> x;
            v.push_back(x);
            sum += x;
        }
 
 
        ll p = 0;
        for (int i=0; i<N-1; i++) {
            sum -= v[i];
            p += ((sum % MOD) * v[i]) % MOD;
            p %= MOD;
        }
 
        ll q = N * (N-1) / 2;
        ll c, k;
        ll g = exEuclid(q, MOD, c, k);
        c = c % MOD;
        p = (p * c) % MOD;     
        cout << p << '\n';
 
    }
    return 0;
}