#include <iostream>
#include <algorithm>
#include <vector>
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        long long a, b, l;
        cin >> a >> b >> l;
        
        int sa = a; int sb = b;
        int x, y;
        x = y = 0;
        while (l%a==0) {
            a*=sa;
            x++;
        }
        while (l%b==0) {
            b*=sb;
            y++;
        }
 
        vector<bool> check(l+1, false);
 
        a = 1; b = 1;
        int ans = 0;
        for (int i=0; i<=x; i++) {
            b = 1;
            for (int j=0; j<=y; j++) {
                long long k = l % (a*b);
                long long div = l / (a*b);
                if (!k && !check[div]) {
                    ans++;
                    check[div] = true;
                }
                b*=sb;
            }
            a *= sa;
        }
        cout << ans << '\n';
    }
    return 0;
}