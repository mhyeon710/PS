#include <iostream>
#include <algorithm>
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        
        int ans = 0;
        for (int i=0; i<N; i++) {
            int x;
            cin >> x;
            if (x < 0) x = -x;
            ans += x;
        }    
        cout << ans << '\n';
    }
    return 0;
}