#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, K, x;
    cin >> N >> K;

    vector <int> v(N);
    map<int, int> idx;
    priority_queue<int> pq;

    for (int i=0; i<N; i++) {
        cin >> x;
        v[i] = x;
        idx[x] = i;
        pq.push(x);
    }


    int cnt = 0;
    for (int i=N-1; i>=0; i--) {
        int maxi = pq.top(); pq.pop();
        int midx = idx[maxi];

        if (midx != i) {
            cnt++;
            swap(idx[v[midx]], idx[v[i]]);
            swap(v[midx], v[i]);
        }

        if (cnt == K) {
            for (auto x:v) cout << x << ' ';
            return 0;
        }
    }

    cout << -1;
    return 0;
}
