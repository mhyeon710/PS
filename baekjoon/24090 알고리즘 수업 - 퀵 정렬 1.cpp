#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int N, K, now;
vector <int> v(10000);

int parti(int p, int r) {
    int x = v[r];
    int i = p-1;
    for (int j=p; j<r; j++) {
        if (v[j] <= x) {
            ++i;
            swap(v[i], v[j]);
            now++;
            if (now == K) cout << min(v[i], v[j]) << ' ' << max(v[i], v[j]);
        }
    }
    if (i+1 != r) {
        swap(v[i+1], v[r]);
        now++;
        if (now == K) cout << min(v[i+1], v[r]) << ' ' << max(v[i+1], v[r]);
    }
    return i+1;
}

void qs(int p, int r) {
    if (p < r) {
        int q = parti(p, r);
        qs(p, q-1);
        qs(q+1, r);

    }
}

int main() {
    fio();
    cin >> N >> K;

    for (int i=0; i<N; i++) cin >> v[i];

    qs(0, N-1);
    
    if (now < K) cout << -1;
    return 0;
}