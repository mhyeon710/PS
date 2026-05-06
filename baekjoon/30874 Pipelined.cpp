#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;
    
    int maxi = 0;
    for (int i=0; i<N; i++) {
        int x; cin >> x;
        maxi = max(maxi, x);
    }

    cout << N-1+maxi;
    return 0;
}