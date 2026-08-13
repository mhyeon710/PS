#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int x[4] = { 0, 1, 0, -1};
int y[4] = { 1, 0, -1, 0};

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    int arr[N][M];
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            if (j == 0 || i == 0 || i == N-1 || j == M-1)  {
                cout << 0 << ' ';
                continue;
            }

            bool check = true;
            for (int t=0; t<4; t++) {
                if (arr[i][j] > arr[i+x[t]][j+y[t]]) {
                    check = false;
                    break;
                }
            }

            if (check) cout << 1 << ' ';
            else cout << 0 << ' ';
        }
        cout << '\n';
    }
    return 0;
}