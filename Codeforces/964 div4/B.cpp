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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
 
        int ans = 0;
 
        int A, B;
        A = B = 0;
        if (a > c) A++;
        else if (a < c) B++;
        if (b > d) A++;
        else if (b < d) B++;
        if (A > B) ans+=2;
 
        A = B = 0;
        if (a > d) A++;
        else if (a < d) B++;
        if (b > c) A++;
        else if (b < c) B++;
        if (A > B) ans+=2;
        
        cout << ans << '\n';
    }
    return 0;
}