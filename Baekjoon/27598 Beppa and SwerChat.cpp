#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int T, N, cnt, now, v1[100000], v2[100000];
int main() {
    fio();
    cin >> T;
    while (T--) {
        cin >> N;

        for (int i=0; i<N; i++) cin >> v1[i];
        for (int i=0; i<N; i++) cin >> v2[i];

        cnt = 0;
        now = N-1;
        
        for (int i=N-1; i>=0; i--) {
            if (v1[i] == v2[now]) {
                cnt++;
                now--;
            }
        }
        
        cout << N - cnt << '\n';
    }

    return 0;
}