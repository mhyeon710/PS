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
        if (N == 1 || N == 2) { cout << 0 << '\n'; continue; }
        
        ll a = N/2;
        ll b = N/2;
        if (N%2) b++;

        cout << ((a - 1) * a / 2) + ((b - 1) * b / 2) << '\n'; 
    }
    return 0;
}