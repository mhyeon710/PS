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
    
    int M; cin >> M;

    int ans = 0;
    for (int i=0; i<M; i++) {
        int x; cin >> x;
        ans += v[x-1];
    }
    
    cout << ans;
    return 0;
}