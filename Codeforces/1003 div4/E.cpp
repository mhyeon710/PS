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
        int N, M, K;
        cin >> N >> M >> K;
 
        if (abs(N-M) > K || max(N,M) < K) {
            cout << -1 << '\n';
            continue;
        }
 
        if (N >= M) {
            for (int i=0; i<K; i++) cout << "0";
            N -= K;
            int cnt = N+M;
            for (int i=0; i<cnt; i++) {
                if (M) {
                    cout << "1";
                    M--;
                }
                if (N) {
                    cout << "0";
                    N--;
                }
            }
        } else {
            for (int i=0; i<K; i++) cout << "1";
            M -= K;
            int cnt = N+M;
            for (int i=0; i<cnt; i++) {
                if (N) {
                    cout << "0";
                    N--;
                }
                if (M) {
                    cout << "1";
                    M--;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}