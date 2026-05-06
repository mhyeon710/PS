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
        int a,b,d,e;
        cin >> a >> b >> d >> e;
        
        int c1 = a + b;
        int c2 = d - b;
        int c3 = e - d;
        if (c1 == c2 && c2 == c3 && c1 == c3) cout << 3 << '\n';
        else if (c1 == c2 && c1 != c3 && c2 != c3) cout << 2 << '\n';
        else if (c1 != c2 && c1 == c3 && c2 != c3) cout << 2 << '\n';
        else if (c1 != c2 && c1 != c3 && c2 == c3) cout << 2 << '\n';
        else cout << 1 << '\n';
    }
    return 0;
}