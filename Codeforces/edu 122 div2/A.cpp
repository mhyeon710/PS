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
        int N; cin >> N;
        if (N % 7 == 0) {
            cout << N << '\n';
        } else {
            int ten = N / 10;
            for (int j=0; j<10; j++) {
                if ((ten * 10 + j) % 7 == 0) {
                    cout << ten*10 + j << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}