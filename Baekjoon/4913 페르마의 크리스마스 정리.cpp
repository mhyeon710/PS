#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int prime[1000000], sec[1000000];
int main() {
    fio();

    vector <bool> p(1000000, 1);
    p[1] = 0;

    for (int i=2; i<=1000; i++) {
        for (int j=i*i; j<1000000; j+=i) {
            p[j] = 0;
        }
    }

    for (int i=2; i<1000000; i++) {
        if (p[i]) {
            prime[i] = prime[i-1] + 1;

            if (i == 2 || i%4 == 1) sec[i] = sec[i-1] + 1;
            else sec[i] = sec[i-1];
        } else {
            prime[i] = prime[i-1];
            sec[i] = sec[i-1];
        }
    }
    
    while (1) {
        int L, U;
        cin >> L >> U;
        
        if (L == -1 && U == -1) break;
        cout << L << ' ' << U << ' ';

        if (L < 2) L = 1;
        if (U < 2) U = 1;

        // cout << prime[U] << ' ' << prime[L] << '\n';

        int x = prime[U] - prime[L-1];
        int y = sec[U] - sec[L-1];
        
        cout << x << ' ' << y << '\n';
    }
    return 0;
}