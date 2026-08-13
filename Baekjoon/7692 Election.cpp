#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    while (1) {
        int G, N;
        cin >> G >> N;
        if (!G && !N)
            break;

        int p[G][N+1];
        for (int i=0; i<G; i++) {
            cin >> p[i][0];
            for (int j=1; j<=N; j++) {
                cin >> p[i][j];
            }
        }
        
        int v[N+1], alive[N+1];
        memset(alive, 0, sizeof(alive));
        for (int i=1; i<=N; i++) alive[i] = 1;
        for (int t=0; t<N-1; t++) {
            memset(v, 0, sizeof(v));
            for (int i=0; i<G; i++) {
                for (int j=1; j<=N; j++) {
                    if (alive[p[i][j]]) {
                        v[p[i][j]] += p[i][0];
                        break;
                    }
                }
            }
            int dead = 0, mini = 10000;
            for (int i=1; i<=N; i++) {
                if (alive[i] && v[i] <= mini) {
                    dead = i;
                    mini = v[i];
                }
            }
            alive[dead] = 0;
        }
        for (int i=1; i<=N; i++) {
            if (alive[i]) {
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}