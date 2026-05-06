#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    ll arr[N][M];
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> arr[i][j];
        }
    }

    bool live[N][M];
    memset(live, 0, sizeof(live));

    for (int i=0; i<N; i++) {
        ll idx = 0, maxi = 0;
        for (int j=0; j<M; j++) {
            if (maxi < arr[i][j]) {
                maxi = arr[i][j];
                idx = j;
            }
        }
        live[i][idx] = 1;
    }

    for (int j=0; j<M; j++) {
        int idx = 0, maxi = 0;
        for (int i=0; i<N; i++) {
            if (maxi < arr[i][j]) {
                maxi = arr[i][j];
                idx = i;
            }
        }
        live[idx][j] = 1;
    }


    ll ans = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            if (!live[i][j]) {
                ans += arr[i][j];
            }
        }
    }

    cout << ans;
    return 0;
}