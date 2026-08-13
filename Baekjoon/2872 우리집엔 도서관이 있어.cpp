#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <int> v(N);
    for (int i=0; i<N; i++) cin >> v[i];

    int now = N;
    for (int i=N-1; i>=0; i--) {
        if (v[i] == now) now--;
    }
    
    cout << now;
    return 0;
}