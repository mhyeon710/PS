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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
 
        if (a > b) swap(a, b);
        if (c > d) swap(c, d);
        
        int cnt = 0;
        for (int i=a+1; i<b; i++) {
            if (c == i || d == i) {
                cnt++;
            }
        }
        if (cnt == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}