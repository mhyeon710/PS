#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int K; cin >> K;

    int N = 1;
    for (int i=1; i<=2000000; i*=2) {
        if (i >= K) {
            N = i;
            break;
        }
    }
    cout << N << ' ';

    if (N == K) {
        cout << 0 << ' ';
        return 0;
    }

    int cnt = 0;
    while (1) {
        N/=2;
        cnt++;
        if (K == N) break;
        if (K > N) K -= N;
    }

    cout << cnt;
    return 0;
}