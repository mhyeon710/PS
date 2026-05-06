#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    fio();
    int N; cin >> N;

    for (int i=0; i<N; i++) {
        ll b, d;
        cin >> b >> d;

        ll mina = b / gcd(b, d);

        ll maxc = b - mina * d / b;
        if (maxc <= 0) {
            cout << 0 << '\n';
            continue;
        } 

        ll nexc = b - mina * 2 * d / b;
        if (nexc <= 0) {
            cout << 1 << '\n';
            continue;
        }

        ll diff = maxc - nexc;
        ll left = maxc / diff;
        if (maxc % diff == 0) left--;
        
        cout << 1 + left << '\n';
    }
    return 0;
}