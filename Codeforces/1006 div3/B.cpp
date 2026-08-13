#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        ll N; cin >> N;
 
        ll a = 0, mid = 0;
        for (int i=0; i<N; i++) {
            char c; cin >> c;
            if (c == '-') a++;
            else mid++;
        }
 
        ll left = a/2 + a%2;
        ll right = a/2;
 
        cout << left * right * mid << '\n';
    }
    return 0;
}