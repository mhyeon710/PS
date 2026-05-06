#include <iostream>
using namespace std;
 
int main() {
    int T; cin >> T;
    while (T--) {
        int N, Q; cin >> N >> Q;
        
        int odd = 0;
        long long ans = 0;
        for (int i=0; i<N; i++) {
            int x; cin >> x;
            if (x%2) odd++;
            ans += x;   
        }
 
        for (int i=0; i<Q; i++) {
            int q, x; cin >> q >> x;
            if (q) {
                if (x%2) {
                    ans += odd*x;
                    odd = 0;
                }
                else {
                    ans += odd*x;
                }
            }
            else {
                if (x%2) {
                    ans += (N-odd)*x;
                    odd = N;
                }
                else {
                    ans += (N-odd)*x;
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}