#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    map<int, int> m;
    for (int i=0; i<N; i++) {
        int x; cin >> x;
        m[x]++;
    }

    int M; cin >> M;
    cout << m[M];

    return 0;
}