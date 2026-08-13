#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M, K;
    cin >> N >> M >> K;

    set <int> s;
    vector <int> cnt(M+1, 0);

    for (int i=0; i<N; i++) {
        
        vector <int> v(M);
        for (int j=0; j<M; j++) cin >> v[j];
        
        cnt[v[0]]++;
        
        for (int j=0; j<M; j++) {
            if (v[j] == K) break;
            s.insert(v[j]);
        }
    }

    int ans = 0;
    int now = 0;
    for (int i=1; i<=M; i++) {
        if (now < cnt[i]) {
            now = cnt[i];
            ans = i;
        }
    }

    cout << ans << '\n';
    cout << s.size();
    return 0;
}