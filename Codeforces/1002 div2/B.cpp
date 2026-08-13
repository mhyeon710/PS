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
        int N, K;
        cin >> N >> K;
 
        vector <int> a(N+4);
        for (int i=1; i<=N; i++) cin >> a[i];
 
        if (N == K) {
            int now = 1;
            for (int i=2; i<=N+2; i+=2) {
                if (a[i] != now) {
                    cout << now << "\n";
                    break;
                }
                now++;
            }
        } else {
            bool check = true;
            for (int i=2; i<=2+N-K; i++) {
                if (a[i] != 1) {
                    check = false;
                    break;
                }
            }
            if (check) cout << 2 << '\n';
            else cout << 1 << '\n';
        }
    }
    return 0;
}