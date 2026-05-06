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
        
        bool zero = false;
        int cnt = 0;
        vector <int> v(N);
        int x;
        for (int i=0; i<N; i++) {
            cin >> x;
            if (x == 0) {
                zero = true;
            } else if (x < 0) {
                cnt++;
            }
        }
 
        if (zero || cnt % 2) {
            cout << "0\n";
        } else {
            cout << "1\n";
            cout << N << ' ' << "0\n";
        }
    }
    return 0;
}
