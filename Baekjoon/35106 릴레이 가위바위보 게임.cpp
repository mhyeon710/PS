#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;
    
    vector <int> v(4);
    for (int i=0; i<3*N; i++) {
        int x; cin >> x;
        v[x]++;
    }

    for (int i=1; i<=3; i++) {
        if (v[i] < N) cout << i << '\n';
    }
    for (int i=1; i<=3; i++) {
        if (v[i] > N) cout << i;
    }
    return 0;
}