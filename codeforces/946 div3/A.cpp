#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int a, b, da, db, ans;
        
        cin >> b >> a;
        ans = 0;
        da = a/2;
        b -= 7*da;
        ans += da;
        if (a%2)  {
            ans++;
            b -= 11;
        }
        if (b > 0) {
            while (b > 0) {
                ans++;
                b-=15;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}