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
        cout << "Pairs for " << N << ": ";        

        for (int i=1; i<=N; i++) {
            int j = N-i;
            if (i == 1 && i<j) cout << i << ' ' << j;
            if (i >= 2 && i<j) cout << ", " << i << ' ' << j;
        }
        
        cout << '\n';
    }
    return 0;
}